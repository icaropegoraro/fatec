// Ícaro Pegoraro Sakurai

#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

bool jaExiste(vector<long long> vetor, long long valor) {
    for (int i = 0; i < vetor.size(); i++) {
        if (vetor[i] == valor) {
            return true;
        }
    }
    return false;
}

bool ehNumeroValido(string s) {
    bool temConteudo = false;
    for(int i=0; i<s.length(); i++) {
        if(s[i] != ' ') temConteudo = true;
    }
    if(!temConteudo) return false;

    int inicio = 0;
    while (inicio < s.length() && s[inicio] == ' ') {
        inicio++;
    }

    if (s[inicio] == '-' || s[inicio] == '+') {
        inicio++;
    }

    if (inicio >= s.length()) return false;

    for (int i = inicio; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            continue;
        } else if (s[i] == ' ') {
            for(int j = i; j < s.length(); j++){
                if(s[j] != ' ') return false;
            }
            break;
        } else {
            return false;
        }
    }
    return true;
}

int lerNumero(string nomeVariavel) {
    string entrada;
    while (true) {
        cout << "Digite o valor de " << nomeVariavel << ": ";
        getline(cin, entrada);

        if (ehNumeroValido(entrada) == false) {
            bool soEspaco = true;
            for(int i=0; i<entrada.length(); i++) {
                if(entrada[i] != ' ') soEspaco = false;
            }
            
            if (entrada.length() == 0 || soEspaco) {
                cout << "Erro: O valor nao pode ser vazio.\n";
            } else {
                cout << "Erro: A entrada deve ser um numero inteiro.\n";
            }
        } else {
            return atoi(entrada.c_str());
        }
    }
}

int main() {
    int x = lerNumero("x");
    int y = lerNumero("y");

    vector<long long> X(50);
    vector<long long> Y(50);

    X[0] = x;
    for (int i = 1; i < 50; i++) {
        X[i] = X[i - 1] + i;
    }

    Y[0] = y;
    for (int i = 1; i < 50; i++) {
        Y[i] = Y[i - 1] + i;
    }

    vector<long long> A;
    vector<long long> B;

    for (int i = 0; i < 50; i++) {
        long long valor = X[i];

        if (valor % 3 == 0) {

            if (jaExiste(A, valor) == false) {
                A.push_back(valor);
            }
        }

        if (valor < 0) {
            if (jaExiste(B, valor) == false) {
                B.push_back(valor);
            }
        }
    }

    for (int i = 0; i < 50; i++) {
        long long valor = Y[i];

        if (valor % 3 == 0) {
            if (jaExiste(A, valor) == false) {
                A.push_back(valor);
            }
        }

        if (valor < 0) {
            if (jaExiste(B, valor) == false) {
                B.push_back(valor);
            }
        }
    }

    cout << "\nResultados:\n";
    
    cout << "Vetor A (Multiplos de 3): ";
    if (A.size() == 0) {
        cout << "Nenhum";
    }
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << " ";
    }
    cout << "\n\n";

    cout << "Vetor B (Negativos): ";
    if (B.size() == 0) {
        cout << "Nenhum";
    }
    for (int i = 0; i < B.size(); i++) {
        cout << B[i] << " ";
    }
    cout << "\n";

    system("pause");
    return 0;
}