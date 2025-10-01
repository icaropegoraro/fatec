#include <iostream>
#include <string>

using namespace std;

void exercicio1() {
    int number, resto;
    string resultado;
    cout << "Insira um número para descobrir se ele é par ou ímpar: "; 
    cin >> number; 

    resultado = (number % 2) == 1 ? "ímpar" : "par";

    cout << "O número " << number << " é " << resultado << "." << endl;
};

void exercicio2() {
    int n1, n2, maior;

    cout << "Vamos verificar qual é o maior número entre dois." << endl;

    cout << "\nDigite o primeiro número: ";
    cin >> n1;

    cout << "\nDigite o segundo número: ";
    cin >> n2;

    if (n1 == n2) {
        cout << "O número n1 e o número n2 são iguais.";
        return;
    };

    maior = (n1 > n2) ? n1 : n2;

    cout << "\nO maior número é " << maior << "." << endl;
};

void exercicio3() {
    int number;

    cout << "Digite um número para ver sua tabuada: ";
    cin >> number;
    cout << endl;

    for (int i = 0; i <= 10; i++) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }
}

void exercicio4() {
    int number, soma;

    cout << "Digite um número N para ver a soma de 1 até N: ";
    cin >> number;

    if (number == 1) {
        cout << "Você digitou o número 1, inválido." << endl;
        return;
    }

    for (int i = 1; i <= number; i++) {
        soma += i;
    }

    cout << "A soma de todos os números entre 1 e n é " << soma << endl;
}

void exercicio5() {
    double n1, n2, n3, n4, n5, media;
    string resultado;

    cout << "Digite a nota do primeiro aluno: ";
    cin >> n1;

    cout << "Digite a nota do segundo aluno: ";
    cin >> n2;

    cout << "Digite a nota do terceiro aluno: ";
    cin >> n3;

    cout << "Digite a nota do quarto aluno: ";
    cin >> n4;

    cout << "Digite a nota do quinto aluno: ";
    cin >> n5;

    media = (n1 + n2 + n3 + n4 + n5)/5;

    resultado = (media >= 6) ? "maior" : "menor";

    cout << "A média geral da turma é " << media << ". A média é " << resultado << " que 6." << endl;
}

void exercicio6() {
    int numberInit, i, fat;

    cout << "Vamos calcular o fatural de um n. Digite um número inteiro: ";
    cin >> numberInit;

    fat = numberInit;
    i = numberInit - 1;

    while (i > 0) {
        fat = (fat * i);
        i--;
    };

    cout << "O fatorial do número " << numberInit << " é " << fat << "." << endl;
}

void exercicio7() {
    int n;

    cout << "Digite um número para uma contagem regressiva: ";
    cin >> n;

    for(int i = n; i >= 0; i--) {
        cout << i << endl;
    };
}

void exercicio8() {
    int n;

    cout << "Digite um número para verificarmos se ele é primo: ";
    cin >> n;

    if ((n == 2) || (n == 3) || (n == 5) || (n == 7)) {
        cout << "O número digitado é primo." << endl;
    } else if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0) || (n & 7 == 0)) {
        cout << "O número digitado não é primo." << endl;
    } else {
        cout << "O número digitado é primo." << endl;
    };
}

void exercicio9() {
    int iInit, soma;

    cout << "Quantos números você definirá? Digite: ";
    cin >> iInit;

    for(int i = 1; i <= iInit; i++) {
        int number = 0;
        cout << "Digite o número " << i << ": ";
        cin >> number;

        if (number % 2 == 0) {
            soma += number;
        };
    };

    if (soma == 0) {
        cout << "Você não digitou números pares." << endl;
    }

    cout << "A soma de todos os pares que você digitou é: " << soma << endl;
}

void exercicio10() {
    return;
}


int main () {
    int opcao;

    do {
        cout << "\n===== Tarefa =====" << endl;
        cout << "1 - Exercício 1" << endl;
        cout << "2 - Exercício 2" << endl;
        cout << "3 - Exercício 3" << endl;
        cout << "4 - Exercício 4" << endl;
        cout << "5 - Exercício 5" << endl;
        cout << "6 - Exercício 6" << endl;
        cout << "7 - Exercício 7" << endl;
        cout << "8 - Exercício 8" << endl;
        cout << "9 - Exercício 9" << endl;
        cout << "10 - Exercício 10" << endl;
        cout << "0 - Sair do programa" << endl;
        cout << "=============================" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                exercicio1();
                break;
            case 2:
                exercicio2();
                break;
            case 3:
                exercicio3();
                break;
            case 4:
                exercicio4();
                break;
            case 5:
                exercicio5();
                break;
            case 6:
                exercicio6();
                break;
            case 7:
                exercicio7();
                break;
            case 8:
                exercicio8();
                break;
            case 9:
                exercicio9();
                break;
            case 10:
                exercicio10();
                break;
            default:
                cout << "Opção inválida! Por favor, tente novamente." << endl;
                break;
        }
    } while (opcao != 0);

    return 0;
}