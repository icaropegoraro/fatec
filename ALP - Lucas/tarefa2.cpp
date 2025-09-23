// Ícaro Pegoraro Sakurai - 2840482523021 - ADS - Noturno - 1o semestre 

#include <iostream>
#include <cmath>

void exercicio1() {
    double n1, n2, n3, n4, media;
    
    std::cout << "\n--- Exercício 1 ---" << std::endl;
    std::cout << "Digite a primeira nota: " ;
    std::cin >> n1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> n2;
    std::cout << "Digite a terceira nota: ";
    std::cin >> n3;
    std::cout << "Digite a quarta nota: ";
    std::cin >> n4;

    media = (n1 + n2 + n3  + n4)/4;

    std::cout << "A média aritmética das notas " << n1 << ", " << n2 << ", " << n3 << " e " << n4 << " é " << media << "." << std::endl;;
}

void exercicio2() {
    double n1, n2, media;

    std::cout << "\n--- Exercício 2 ---" << std::endl;
    std::cout << "Digite a primeira nota: ";
    std::cin >> n1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> n2;

    media = (n1 + n2)/2;

    if (media < 3) {
        std::cout << "Sua média foi " << media << ". Você foi reprovado!" << std::endl;;
    }
    
    if (media >= 3 && media < 7) {
        std::cout << "Sua média foi " << media << ". Será necessário que você faça exame de recuperação." << std::endl;;
    }
    
    if (media >= 7) {
        std::cout << "Sua média foi " << media << ". Você foi aprovado!" << std::endl;;
    }
}

void exercicio3() {
    double n1, n2, menor;

    std::cout << "\n--- Exercício 3 ---" << std::endl;
    std::cout << "Digite o primeiro número: ";
    std::cin >> n1;
    std::cout << "Digite o segundo número: ";
    std::cin >> n2;

    menor = (n1 < n2) ? n1 : n2;

    std:: cout << "O menor número entre " << n1 << " e " << n2 << " é " << menor << "." << std::endl;
}

void exercicio4() {
    double n1, n2, n3, maior;

    std::cout << "\n--- Exercício 4 ---" << std::endl;
    std::cout << "Digite o primeiro número: ";
    std::cin >> n1;
    std::cout << "Digite o segundo número: ";
    std::cin >> n2;
    std::cout << "Digite o terceiro número: ";
    std::cin >> n3;

    maior = (n1 > n2) ? n1 : n2;
    maior = (maior > n3) ? maior : n3;

    std:: cout << "O maior número entre " << n1 << ", " << n2 << " e " << n3 << " é " << maior << "." << std::endl;
}

void exercicio5() {
    int operacao;

    auto media = [&]() {
        double n1, n2, media;

        std::cout << "Digite o primeiro número: ";
        std::cin >> n1;
        std::cout << "Digite o segundo número: ";
        std::cin >> n2;

        media = (n1 + n2)/2;

        std::cout << "A média entre " << n1 << " e " << n2 << " é " << media << "." << std::endl;
    };

    auto executarSubtracao = [&]() {
        double n1, n2, resultado;

        std::cout << "Digite o primeiro número: ";
        std::cin >> n1;
        std::cout << "Digite o segundo número: ";
        std::cin >> n2;

        resultado = (n1 > n2) ? (n1 - n2) : (n2 - n1);

        std::cout << "Resultado da subtração: " << resultado << std::endl;
    };

    auto executarMultiplicacao = [&]() {
        double n1, n2, produto;

        std::cout << "Digite o primeiro número: ";
        std::cin >> n1;
        std::cout << "Digite o segundo número: ";
        std::cin >> n2;
        
        produto = n1 * n2;

        std::cout << "Resultado da multiplicação: " << produto << std::endl;
    };

    auto executarDivisao = [&]() {
        double n1, n2, quociente;

        std::cout << "Digite o primeiro número: ";
        std::cin >> n1;
        std::cout << "Digite o segundo número: ";
        std::cin >> n2;

        quociente = n1/n2;

        if (n2 == 0) {
            std::cout << "Erro! Divisão por zero não é permitida." << std::endl;
        } else {
            std::cout << "Resultado: " << n1 << " / " << n2 << " = " << quociente << std::endl;
        }
    };

    do {
        std::cout << "\n--- Exercício 5 ---" << std::endl;
        std::cout << "1 - Média entre os números digitados" << std::endl;
        std::cout << "2 - Diferença do maior pelo menor" << std::endl;
        std::cout << "3 - Produto entre os números" << std::endl;
        std::cout << "4 - Divisão do primeiro pelo segundo" << std::endl;
        std::cout << "=============================" << std::endl;
        std::cout << "Escolha uma operação: ";
        std::cin >> operacao;

        switch (operacao) {
            case 1:
                media();
                break;
            case 2:
                executarSubtracao();
                break;
            case 3:
                executarMultiplicacao();
                break;
            case 4:
                executarDivisao();
                break;
            default:
                operacao = 0;
                std::cout << "Opção inválida! Saindo do programa. Até mais!" << std::endl;
                break;
        }
    } while (operacao != 0);
}

void exercicio6() {
    int operacao;

    auto exponencial = [&]() {
        double n1, n2, resultado;

        std::cout << "Digite o primeiro número: ";
        std::cin >> n1;
        std::cout << "Digite o segundo número: ";
        std::cin >> n2;

        resultado = std::pow(n1, n2);

        std::cout << n1 << " elevado a " << n2 << " é: " << resultado << std::endl;
    };

    auto raizQuadrada = [&]() {
        double n1, n2, resultado1, resultado2;

        std::cout << "Digite o primeiro número: ";
        std::cin >> n1;
        std::cout << "Digite o segundo número: ";
        std::cin >> n2;
        
        resultado1 = std::sqrt(n1);
        resultado2 = std::sqrt(n2);

        std::cout << "A raiz quadrada de " << n1 << " é: " << resultado1 << std::endl;
        std::cout << "A raiz quadrada de " << n2 << " é: " << resultado2 << std::endl;
    };

    auto raizCubica = [&]() {
        double n1, n2, resultado1, resultado2;

        std::cout << "Digite o primeiro número: ";
        std::cin >> n1;
        std::cout << "Digite o segundo número: ";
        std::cin >> n2;
        
        resultado1 = std::cbrt(n1);
        resultado2 = std::cbrt(n2);

        std::cout << "A raiz cúbica de " << n1 << " é: " << resultado1 << std::endl;
        std::cout << "A raiz cúbica de " << n2 << " é: " << resultado2 << std::endl;
    };

    do {
        std::cout << "\n--- Exercício 6 ---" << std::endl;
        std::cout << "1 - Exponenciação" << std::endl;
        std::cout << "2 - Raiz quadrada" << std::endl;
        std::cout << "3 - Raiz cúbica" << std::endl;
        std::cout << "=============================" << std::endl;
        std::cout << "Escolha uma operação: ";
        std::cin >> operacao;

        switch (operacao) {
            case 1:
                exponencial();
                break;
            case 2:
                raizQuadrada();
                break;
            case 3:
                raizCubica();
                break;
            default:
                operacao = 0;
                std::cout << "Opção inválida! Saindo do programa. Até mais!" << std::endl;
                break;
        }
    } while (operacao != 0);
}

void exercicio7() {
    double salario;

    std::cout << "\n--- Exercício 7 ---" << std::endl;
    std::cout << "Qual o seu salário atual? R$";
    std::cin >> salario;

    if (salario >= 500) {
        std::cout << "Por enquanto você não possui direito a reajuste salarial." << std::endl;
        return;
    }

    std::cout << "Seu salário será reajustado! Seu novo salário é R$" << salario * 1.3 << "." << std::endl;
}

void exercicio8() {
    double salario;

    std::cout << "\n--- Exercício 8 ---" << std::endl;
    std::cout << "Qual o seu salário atual? R$";
    std::cin >> salario;

    if (salario <= 300) {
        std::cout << "Seu salário será reajustado! Seu novo salário é R$" << salario * 1.35 << "." << std::endl;
        return;
    }

    std::cout << "Seu salário será reajustado! Seu novo salário é R$" << salario * 1.15 << "." << std::endl;
}

void exercicio9() {
    double saldoMedio, credito;

    std::cout << "\n--- Exercício 9 ---" << std::endl;
    std::cout << "Qual o saldo médio do cliente?";
    std::cin >> saldoMedio;

    if (saldoMedio <= 200) {
        credito = saldoMedio * 0.1;
    } 
    
    if (saldoMedio <= 300 && saldoMedio > 200) {
        credito = saldoMedio * 0.2;
    }

    if (saldoMedio <= 400  && saldoMedio > 300) {
        credito = saldoMedio * 0.25;
    }

    if (saldoMedio > 400) {
        credito = saldoMedio * 0.3;
    }

    std::cout << "Baseado em seu saldo médio no último ano, seu crédito R$" << credito << std::endl;
}

void exercicio10() {
    double precoCusto, precoFinal, percImposto, percDistribuidor;

    std::cout << "\n--- Exercício 10 ---" << std::endl;
    std::cout << "Qual o custo de fábrica do veículo?";
    std::cin >> precoCusto;

    if (precoCusto <= 12000) {
        percDistribuidor = 0.05;
        percImposto = 0;
    }

    if (precoCusto > 12000 && precoCusto <= 25000) {
        percDistribuidor = 0.1;
        percImposto = 0.15;
    }

    if (precoCusto > 25000) {
        percDistribuidor = 0.15;
        percImposto = 0.2;
    }

    precoFinal = precoCusto * (1 + percImposto + percDistribuidor);

    std::cout << "O preço final do carro é " << precoFinal << std::endl;
}

void exercicio11() {
    double salarioAtual, aumento, salarioFinal;

    std::cout << "\n--- Exercício 11 ---" << std::endl;
    std::cout << "Qual o seu salário atual? R$";
    std::cin >> salarioAtual;

    if (salarioAtual <= 300) {
        aumento = salarioAtual * 0.15;
    } else if (salarioAtual > 300 && salarioAtual < 600) {
        aumento = salarioAtual * 0.1;
    } else if (salarioAtual >= 600 && salarioAtual <= 900) {
        aumento = salarioAtual * 0.5;
    } else if (salarioAtual <= 300) {
        aumento = salarioAtual * 0;
    }

    if (aumento == 0) {
        std::cout << "Por enquanto, você não terá aumento salarial.";
        return;
    }

    salarioFinal = salarioAtual + aumento;

    std::cout << "Você receberá um aumento salarial de R$" << aumento << ". Seu novo salário é R$" << salarioFinal << "." << std::endl;
}

void exercicio12() {
    double salarioBruto, gratificacao, salarioLiquido;
    const double percImposto = 0.07;

    std::cout << "\n--- Exercício 11 ---" << std::endl;
    std::cout << "Qual o seu salário bruto? R$";
    std::cin >> salarioBruto;

    if (salarioBruto <= 350) {
        gratificacao = 100;
    } else if (salarioBruto > 350 && salarioBruto < 600) {
        gratificacao = 75;
    } else if (salarioBruto >= 600 && salarioBruto <= 900) {
        gratificacao = 50;
    } else if (salarioBruto <= 300) {
        gratificacao = 35;
    }

    salarioLiquido = salarioBruto * (1 - percImposto) + gratificacao;

    std::cout << "Seu salário líquido é R$" << salarioLiquido << "." << std::endl;
}

void exercicio13() {
    
}

void exercicio14() {
    
}

void exercicio15() {
    
}

void exercicio16() {
    
}

void exercicio17() {
    
}

void exercicio18() {
    
}

void exercicio19() {
    
}

void exercicio20() {
    
}

void exercicio21() {
    
}

void exercicio22() {
    
}

void exercicio23() {
    
}

void exercicio24() {
    
}


int main() {
    int opcao;

    do {
        std::cout << "\n===== Tarefa 2 =====" << std::endl;
        std::cout << "1 - Exercício 1" << std::endl;
        std::cout << "2 - Exercício 2" << std::endl;
        std::cout << "3 - Exercício 3" << std::endl;
        std::cout << "4 - Exercício 4" << std::endl;
        std::cout << "5 - Exercício 5" << std::endl;
        std::cout << "6 - Exercício 6" << std::endl;
        std::cout << "7 - Exercício 7" << std::endl;
        std::cout << "8 - Exercício 8" << std::endl;
        std::cout << "9 - Exercício 9" << std::endl;
        std::cout << "10 - Exercício 10" << std::endl;
        std::cout << "11 - Exercício 11" << std::endl;
        std::cout << "12 - Exercício 12" << std::endl;
        std::cout << "13 - Exercício 13" << std::endl;
        std::cout << "14 - Exercício 14" << std::endl;
        std::cout << "15 - Exercício 15" << std::endl;
        std::cout << "16 - Exercício 16" << std::endl;
        std::cout << "17 - Exercício 17" << std::endl;
        std::cout << "18 - Exercício 18" << std::endl;
        std::cout << "19 - Exercício 19" << std::endl;
        std::cout << "20 - Exercício 20" << std::endl;
        std::cout << "21 - Exercício 21" << std::endl;
        std::cout << "22 - Exercício 22" << std::endl;
        std::cout << "23 - Exercício 23" << std::endl;
        std::cout << "24 - Exercício 24" << std::endl;
        std::cout << "25 - Exercício 25" << std::endl;
        std::cout << "0 - Sair do programa" << std::endl;
        std::cout << "=============================" << std::endl;
        std::cout << "Escolha uma opção: ";
        std::cin >> opcao;

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
            case 11:
                exercicio11();
                break;
            case 12:
                exercicio12();
                break;
            case 13:
                exercicio13();
                break;
            case 14:
                exercicio14();
                break;
            case 15:
                exercicio15();
                break;
            case 16:
                exercicio16();
                break;
            case 17:
                exercicio17();
                break;
            case 18:
                exercicio18();
                break;
            case 19:
                exercicio19();
                break;
            case 20:
                exercicio20();
                break;
            case 21:
                exercicio21();
                break;
            case 22:
                exercicio22();
                break;
            case 23:
                exercicio23();
                break;
            case 24:
                exercicio24();
                break;
            case 0:
                std::cout << "Saindo do programa. Até mais!" << std::endl;
                break;
            default:
                std::cout << "Opção inválida! Por favor, tente novamente." << std::endl;
                break;
        }

    } while (opcao != 0);
    return 0;
} 