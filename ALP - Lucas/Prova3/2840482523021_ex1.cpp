#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

struct Caixa {
    int id;
    double peso;
};

bool ehNumeroValido(string s) {
    if (s.length() == 0) return false;

    bool temPonto = false;
    bool temNumero = false;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];
        
        if (c >= '0' && c <= '9') {
            temNumero = true;
        } 
        else if (c == '.') {
            if (temPonto) return false;
            temPonto = true;
        } 
        else if (c != ' ') { 
            return false;
        }
    }
    return temNumero;
}

double lerNumero(string mensagem) {
    string entrada;
    double valor;
    bool valido = false;

    while (valido == false) {
        cout << mensagem;
        getline(cin, entrada);

        if (ehNumeroValido(entrada) == true) {
            valor = atof(entrada.c_str());
            
            if (valor < 0) {
                cout << "Erro: O numero nao pode ser negativo." << endl;
            } else {
                valido = true;
            }
        } else {
            cout << "Erro: A entrada deve conter apenas numeros validos." << endl;
        }
    }
    return valor;
}

char lerOpcao() {
    string entrada;
    while (true) {
        getline(cin, entrada);
        
        if (entrada.length() > 0) {
            char c = entrada[0];
            if (c == 's' || c == 'S') return 'S';
            if (c == 'n' || c == 'N') return 'N';
        }
        cout << "Opcao invalida. Digite S ou N: ";
    }
}

int main() {
    int n = (int)lerNumero("Quantas caixas voce vai despachar hoje? ");

    vector<Caixa> caixas;

    for (int i = 0; i < n; i++) {
        cout << "Qual o peso da caixa de numero " << (i + 1) << "? ";
        
        string entrada;
        getline(cin, entrada);
        
        double peso = 0;
        bool pesoValido = false;
        while(!pesoValido) {
            if(ehNumeroValido(entrada)) {
                peso = atof(entrada.c_str());
                if(peso >= 0) {
                    pesoValido = true;
                } else {
                    cout << "Erro: O numero nao pode ser negativo." << endl;
                    cout << "Digite novamente o peso da caixa " << (i+1) << ": ";
                    getline(cin, entrada);
                }
            } else {
                cout << "Erro: A entrada deve conter apenas numeros validos." << endl;
                cout << "Digite novamente o peso da caixa " << (i+1) << ": ";
                getline(cin, entrada);
            }
        }

        Caixa c;
        c.id = i + 1;
        c.peso = peso;
        caixas.push_back(c);
    }

    cout << "\n--- Iniciando processo de separacao ---\n" << endl;

    while (caixas.size() > 0) {

        for (int i = 0; i < caixas.size(); i++) {
            for (int j = 0; j < caixas.size() - 1; j++) {
                if (caixas[j].peso < caixas[j + 1].peso) {
                    Caixa aux = caixas[j];
                    caixas[j] = caixas[j + 1];
                    caixas[j + 1] = aux;
                }
            }
        }

        int qtdPegar = 3;
        if (caixas.size() < 3) {
            qtdPegar = caixas.size();
        }
        
        cout << "Separe as seguintes caixas (Ordem: Mais pesada -> Mais leve):" << endl;
        
        for (int i = 0; i < qtdPegar; i++) {
            cout << i + 1 << "o. Caixa numero " << caixas[i].id 
                << " (Peso: " << fixed << setprecision(2) << caixas[i].peso << "kg)" << endl;
        }

        bool separado = false;
        while (separado == false) {
            cout << "\nJa separou as caixas acima? (S/N): ";
            char resp = lerOpcao();

            if (resp == 'S') {
                separado = true;
                
                for(int k=0; k < qtdPegar; k++) {
                    caixas.erase(caixas.begin());
                }
                
                cout << "Caixas removidas da lista!\n" << endl;
            } else {
                cout << "Ok! Aguardo voce separar." << endl;
            }
        }
    }

    cout << "Sucesso! Todos os pacotes foram despachados." << endl;
    
    system("pause");
    return 0;
}