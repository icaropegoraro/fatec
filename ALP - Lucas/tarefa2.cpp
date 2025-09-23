// Ícaro Pegoraro Sakurai - 2840482523021 - ADS - Noturno - 1o semestre 

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

void exercicio1() {
    double n1, n2, n3, n4, media;
    
    cout << "\n--- Exercício 1 ---" << endl;
    cout << "Digite a primeira nota: " ;
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << "Digite a quarta nota: ";
    cin >> n4;

    media = (n1 + n2 + n3  + n4) / 4;

    cout << "A média aritmética das notas " << n1 << ", " << n2 << ", " << n3 << " e " << n4 << " é " << media << "." << endl;
}

void exercicio2() {
    double n1, n2, media;

    cout << "\n--- Exercício 2 ---" << endl;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;

    media = (n1 + n2)/2;

    if (media < 3) {
        cout << "Sua média foi " << media << ". Você foi reprovado!" << endl;;
    }
    
    if (media >= 3 && media < 7) {
        cout << "Sua média foi " << media << ". Será necessário que você faça exame de recuperação." << endl;;
    }
    
    if (media >= 7) {
        cout << "Sua média foi " << media << ". Você foi aprovado!" << endl;;
    }
}

void exercicio3() {
    double n1, n2, menor;

    cout << "\n--- Exercício 3 ---" << endl;
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;

    menor = (n1 < n2) ? n1 : n2;

     cout << "O menor número entre " << n1 << " e " << n2 << " é " << menor << "." << endl;
}

void exercicio4() {
    double n1, n2, n3, maior;

    cout << "\n--- Exercício 4 ---" << endl;
    cout << "Digite o primeiro número: ";
    cin >> n1;
    cout << "Digite o segundo número: ";
    cin >> n2;
    cout << "Digite o terceiro número: ";
    cin >> n3;

    maior = (n1 > n2) ? n1 : n2;
    maior = (maior > n3) ? maior : n3;

     cout << "O maior número entre " << n1 << ", " << n2 << " e " << n3 << " é " << maior << "." << endl;
}

void exercicio5() {
    int operacao;

    auto media = [&]() {
        double n1, n2, media;

        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;

        media = (n1 + n2)/2;

        cout << "A média entre " << n1 << " e " << n2 << " é " << media << "." << endl;
    };

    auto executarSubtracao = [&]() {
        double n1, n2, resultado;

        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;

        resultado = (n1 > n2) ? (n1 - n2) : (n2 - n1);

        cout << "Resultado da subtração: " << resultado << endl;
    };

    auto executarMultiplicacao = [&]() {
        double n1, n2, produto;

        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;
        
        produto = n1 * n2;

        cout << "Resultado da multiplicação: " << produto << endl;
    };

    auto executarDivisao = [&]() {
        double n1, n2, quociente;

        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;

        quociente = n1/n2;

        if (n2 == 0) {
            cout << "Erro! Divisão por zero não é permitida." << endl;
        } else {
            cout << "Resultado: " << n1 << " / " << n2 << " = " << quociente << endl;
        }
    };

    do {
        cout << "\n--- Exercício 5 ---" << endl;
        cout << "1 - Média entre os números digitados" << endl;
        cout << "2 - Diferença do maior pelo menor" << endl;
        cout << "3 - Produto entre os números" << endl;
        cout << "4 - Divisão do primeiro pelo segundo" << endl;
        cout << "=============================" << endl;
        cout << "Escolha uma operação: ";
        cin >> operacao;

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
                cout << "Opção inválida! Saindo do programa. Até mais!" << endl;
                break;
        }
    } while (operacao != 0);
}

void exercicio6() {
    int operacao;

    auto exponencial = [&]() {
        double n1, n2, resultado;

        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;

        resultado = pow(n1, n2);

        cout << n1 << " elevado a " << n2 << " é: " << resultado << endl;
    };

    auto raizQuadrada = [&]() {
        double n1, n2, resultado1, resultado2;

        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;
        
        resultado1 = sqrt(n1);
        resultado2 = sqrt(n2);

        cout << "A raiz quadrada de " << n1 << " é: " << resultado1 << endl;
        cout << "A raiz quadrada de " << n2 << " é: " << resultado2 << endl;
    };

    auto raizCubica = [&]() {
        double n1, n2, resultado1, resultado2;

        cout << "Digite o primeiro número: ";
        cin >> n1;
        cout << "Digite o segundo número: ";
        cin >> n2;
        
        resultado1 = cbrt(n1);
        resultado2 = cbrt(n2);

        cout << "A raiz cúbica de " << n1 << " é: " << resultado1 << endl;
        cout << "A raiz cúbica de " << n2 << " é: " << resultado2 << endl;
    };

    do {
        cout << "\n--- Exercício 6 ---" << endl;
        cout << "1 - Exponenciação" << endl;
        cout << "2 - Raiz quadrada" << endl;
        cout << "3 - Raiz cúbica" << endl;
        cout << "=============================" << endl;
        cout << "Escolha uma operação: ";
        cin >> operacao;

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
                cout << "Opção inválida! Saindo do programa. Até mais!" << endl;
                break;
        }
    } while (operacao != 0);
}

void exercicio7() {
    double salario;

    cout << "\n--- Exercício 7 ---" << endl;
    cout << "Qual o seu salário atual? R$";
    cin >> salario;

    if (salario >= 500) {
        cout << "Por enquanto você não possui direito a reajuste salarial." << endl;
        return;
    }

    cout << "Seu salário será reajustado! Seu novo salário é R$" << salario * 1.3 << "." << endl;
}

void exercicio8() {
    double salario;

    cout << "\n--- Exercício 8 ---" << endl;
    cout << "Qual o seu salário atual? R$";
    cin >> salario;

    if (salario <= 300) {
        cout << "Seu salário será reajustado! Seu novo salário é R$" << salario * 1.35 << "." << endl;
        return;
    }

    cout << "Seu salário será reajustado! Seu novo salário é R$" << salario * 1.15 << "." << endl;
}

void exercicio9() {
    double saldoMedio, credito;

    cout << "\n--- Exercício 9 ---" << endl;
    cout << "Qual o saldo médio do cliente?";
    cin >> saldoMedio;

    if (saldoMedio <= 200) {
        credito = saldoMedio * 0.1;
    } else if (saldoMedio <= 300 && saldoMedio > 200) {
        credito = saldoMedio * 0.2;
    } else if (saldoMedio <= 400  && saldoMedio > 300) {
        credito = saldoMedio * 0.25;
    } else if (saldoMedio > 400) {
        credito = saldoMedio * 0.3;
    }

    cout << "Baseado em seu saldo médio no último ano, seu crédito R$" << credito << endl;
}

void exercicio10() {
    double precoCusto, precoFinal, percImposto, percDistribuidor;

    cout << "\n--- Exercício 10 ---" << endl;
    cout << "Qual o custo de fábrica do veículo?";
    cin >> precoCusto;

    if (precoCusto <= 12000) {
        percDistribuidor = 0.05;
        percImposto = 0;
    } else if (precoCusto > 12000 && precoCusto <= 25000) {
        percDistribuidor = 0.1;
        percImposto = 0.15;
    } else if (precoCusto > 25000) {
        percDistribuidor = 0.15;
        percImposto = 0.2;
    }

    precoFinal = precoCusto * (1 + percImposto + percDistribuidor);

    cout << "O preço final do carro é " << precoFinal << endl;
}

void exercicio11() {
    double salarioAtual, aumento, salarioFinal;

    cout << "\n--- Exercício 11 ---" << endl;
    cout << "Qual o seu salário atual? R$";
    cin >> salarioAtual;

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
        cout << "Por enquanto, você não terá aumento salarial.";
        return;
    }

    salarioFinal = salarioAtual + aumento;

    cout << "Você receberá um aumento salarial de R$" << aumento << ". Seu novo salário é R$" << salarioFinal << "." << endl;
}

void exercicio12() {
    double salarioBruto, gratificacao, salarioLiquido;
    const double percImposto = 0.07;

    cout << "\n--- Exercício 12 ---" << endl;
    cout << "Qual o seu salário bruto? R$";
    cin >> salarioBruto;

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

    cout << "Seu salário líquido é R$" << salarioLiquido << "." << endl;
}

void exercicio13() {
    double precoAtual, novoPreco;
    string classificacao;

    cout << "\n--- Exercício 13 ---" << endl;
    cout << "Qual o preço do produto? R$";
    cin >> precoAtual;

    novoPreco = (precoAtual <= 50) ? precoAtual * 0.05 :
                (precoAtual > 50 && precoAtual <= 100) ? precoAtual * 0.1 :
                precoAtual * 0.15;

    if (novoPreco <= 80) {
        classificacao = "Barato";
    } else if (novoPreco > 80 && novoPreco <= 120) {
        classificacao = "Normal";
    } else if (novoPreco > 120 && novoPreco <= 200) {
        classificacao = "Caro";
    } else if (novoPreco > 200) {
        classificacao = "Muito caro";
    }

    cout << "O preço do produto será ajustado para R$" << novoPreco << ", considerado " << classificacao << "." << endl;
}

void exercicio14() {
    double salario, novoSalario;

    cout << "\n--- Exercício 14 ---" << endl;
    cout << "Qual o seu salário atual? R$";
    cin >> salario;

    if (salario <= 300) {
        novoSalario = salario * 1.5;
    } else if (salario <= 500 && salario > 300) {
        novoSalario = salario * 1.4;
    } else if (salario <= 700  && salario > 500) {
        novoSalario = salario * 1.3;
    } else if (salario <= 800  && salario > 700) {
        novoSalario = salario * 1.2;
    } else if (salario <= 1000  && salario > 800) {
        novoSalario = salario * 1.1;
    } else {
        novoSalario = salario * 1.05;
    }

    cout << "Seu novo salário é R$" << novoSalario << endl;
}

void exercicio15() {
    double capital, montante;
    int tipo;

    cout << "\n--- Exercício 15 ---" << endl;
    cout << "Qual tipo de investimento?" << endl;
    cout << "1 - Poupança" << endl;
    cout << "2 - Fundos de renda fixa" << endl;
    cin >> tipo;
    cout << "\nQual valor será investido? R$";
    cin >> capital;

    switch (tipo) {
        case 1:
            montante = capital * 1.03;
        break;
        case 2:
            montante = capital * 1.04;
        break;
        default:
            cout << "Opção não encontrada! Tente novamente mais tarde."  << endl;
        break;
    }

    cout << "Após um mês, o montante acumulado é R$" << montante << endl;

}

void exercicio16() {
    int codProduto;
    double precoAtual, novoPreco, desconto;

    cout << "\n--- Exercício 16 ---" << endl;
    cout << "Qual código do produto?" << endl;
    cin >> codProduto;
    cout << "\nQual o preço atual do produto de código "<< codProduto << "? R$";
    cin >> precoAtual;

    if (precoAtual <= 30) {
        novoPreco = precoAtual;
    } else if (precoAtual <= 100 && precoAtual > 30) {
        novoPreco = precoAtual * 0.1;
    } else if (precoAtual > 100) {
        desconto = precoAtual * 0.15;
    }

    novoPreco = precoAtual - desconto;

    if (precoAtual == novoPreco) {
        cout << "O produto de código " << codProduto << " não teve seu preço alterado." << endl;
    } else {
        cout << "O novo preço do produto de código " << codProduto << " é R$" << novoPreco << endl;
    }
}

void exercicio17() {
    const string senha = "4531"; 
    string entradaSenha;
    
    cout << "\n--- Exercício 17 ---" << endl;
    cout << "Digite a nova senha: ";
    cin >> entradaSenha;

    if (entradaSenha == senha) {
        cout << "Login realizado com sucesso!" << endl;;
    } else {
        cout << "Senha incorreta! Tente novamente mais tarde." << endl;;
    }
}

void exercicio18() {
    int idade;

    cout << "\n--- Exercício 18 ---" << endl;
    cout << "Digite sua idade em anos: ";
    cin >> idade;

    if (idade >= 18) {
        cout << "Você é maior de idade." << endl;
    } else {
        cout << "Você é menor de idade." << endl;
    }
}

void exercicio19() {
    double altura, pesoIdeal;
    char sexo;
    int enumSexo;

    enumSexo = (sexo = 'M') ? 0 : (sexo = 'F') ? 1 : 2;

    cout << "\n--- Exercício 18 ---" << endl;
    cout << "Qual seu sexo?";
    cin >> sexo;
    cout << "Digite sua altura em metros: ";
    cin >> altura;

    switch (sexo) {
        case 0:
            pesoIdeal = (72.7 * altura) - 58;
        case 1:
            pesoIdeal = (72.7 * altura) - 58;
        default:
            cout << "Você digitou uma opção inválida." << endl;
    }

    cout << "Seu peso ideal é " << pesoIdeal << "kg ." << endl;

}

void exercicio20() {
    int idade;

    cout << "Digite a idade do nadador: ";
    cin >> idade;

    if (idade < 5) {
        cout << "Idade insuficiente para categorizacao." << endl;
    } else if (idade >= 5 && idade <= 7) {
        cout << "Categoria: Infantil" << endl;
    } else if (idade >= 8 && idade <= 10) {
        cout << "Categoria: Juvenil" << endl;
    } else if (idade >= 11 && idade <= 15) {
        cout << "Categoria: Adolescente" << endl;
    } else if (idade >= 16 && idade <= 30) {
        cout << "Categoria: Adulto" << endl;
    } else {
        cout << "Categoria: Senior" << endl;
    }

}

void exercicio21() {
    double preco;
    int codigoOrigem;
    string procedencia;

    cout << "Digite o preco do produto: ";
    cin >> preco;
    cout << "Digite o codigo de origem do produto: ";
    cin >> codigoOrigem;

    if (codigoOrigem == 1) {
        procedencia = "Sul";
    } else if (codigoOrigem == 2) {
        procedencia = "Norte";
    } else if (codigoOrigem == 3) {
        procedencia = "Leste";
    } else if (codigoOrigem == 4) {
        procedencia = "Oeste";
    } else if (codigoOrigem == 5 || codigoOrigem == 6) {
        procedencia = "Nordeste";
    } else if (codigoOrigem >= 7 && codigoOrigem <= 9) {
        procedencia = "Sudeste";
    } else if (codigoOrigem >= 10 && codigoOrigem <= 20) {
        procedencia = "Centro-oeste";
    } else if (codigoOrigem >= 21 && codigoOrigem <= 30) {
        procedencia = "Nordeste";
    } else {
        procedencia = "Procedencia nao identificada";
    }

    cout << "\n--- Dados do Produto ---" << endl;
    cout << "Preco: R$ " << preco << endl;
    cout << "Codigo de origem: " << codigoOrigem << endl;
    cout << "Procedencia: " << procedencia << endl;
}

void exercicio22() {
    int idade;
    float peso;
    int grupoDeRisco = 0;

    cout << "Digite sua idade: ";
    cin >> idade;

    cout << "Digite seu peso (em kg): ";
    cin >> peso;
    
    if (idade < 20) {
        if (peso <= 60) {
            grupoDeRisco = 9;
        } else if (peso > 60 && peso <= 90) {
            grupoDeRisco = 8;
        } else {
            grupoDeRisco = 7;
        }
    } else if (idade >= 20 && idade <= 50) {
        if (peso <= 60) {
            grupoDeRisco = 6;
        } else if (peso > 60 && peso <= 90) {
            grupoDeRisco = 5;
        } else {
            grupoDeRisco = 4;
        }
    } else if (idade > 50) {
        if (peso <= 60) {
            grupoDeRisco = 3;
        } else if (peso > 60 && peso <= 90) {
            grupoDeRisco = 2;
        } else {
            grupoDeRisco = 1;
        }
    }

    if (grupoDeRisco != 0) {
        cout << "\nSeu grupo de risco e: " << grupoDeRisco << endl;
    } else {
        cout << "\nIdade ou peso inválidos. Nao foi possivel calcular o grupo de risco." << endl;
    }
}

void exercicio23() {
    int codigo;
    int quantidade;
    double precoUnitario, precoTotalNota, valorDesconto, precoFinalNota;

    cout << "Digite o codigo do produto: ";
    cin >> codigo;
    cout << "Digite a quantidade comprada: ";
    cin >> quantidade;

    if (codigo >= 1 && codigo <= 10) {
        precoUnitario = 10.00;
    } else if (codigo >= 11 && codigo <= 20) {
        precoUnitario = 15.00;
    } else if (codigo >= 21 && codigo <= 30) {
        precoUnitario = 20.00;
    } else if (codigo >= 31 && codigo <= 40) {
        precoUnitario = 30.00;
    } else {
        cout << "\nCodigo de produto invalido. Por favor, insira um codigo entre 1 e 40." << endl;
    }

    precoTotalNota = precoUnitario * quantidade;

    if (precoTotalNota <= 250.00) {
        valorDesconto = precoTotalNota * 0.05;
    } else if (precoTotalNota > 250.00 && precoTotalNota <= 500.00) {
        valorDesconto = precoTotalNota * 0.10;
    } else {
        valorDesconto = precoTotalNota * 0.15;
    }

    precoFinalNota = precoTotalNota - valorDesconto;

    cout << "\n--- Resumo da Nota Fiscal ---" << endl;
    cout << "Preco unitario do produto: R$ " << precoUnitario << endl;
    cout << "Preco total da nota: R$ " << precoTotalNota << endl;
    cout << "Valor do desconto: R$ " << valorDesconto << endl;
    cout << "Preco final da nota: R$ " << precoFinalNota << endl;
}

void exercicio24() {
    double preco;
    int categoria;
    char situacao;

    cout << "Digite o preco do produto: ";
    cin >> preco;
    cout << "Digite a categoria (1 a 3): ";
    cin >> categoria;
    cout << "Digite a situacao (R para refrigeracao, N para normal): ";
    cin >> situacao;

    situacao = toupper(situacao);

    double percentualAumento = 0.0;
    double valorAumento;
    double valorImposto;
    double novoPreco;
    string classificacao;

    if (preco <= 25.0) {
        if (categoria == 1) {
            percentualAumento = 0.05;
        } else if (categoria == 2) {
            percentualAumento = 0.08;
        } else if (categoria == 3) {
            percentualAumento = 0.10;
        }
    } else {
        if (categoria == 1) {
            percentualAumento = 0.12;
        } else if (categoria == 2) {
            percentualAumento = 0.15;
        } else if (categoria == 3) {
            percentualAumento = 0.18;
        }
    }
    
    valorAumento = preco * percentualAumento;

    bool isCategoria2 = (categoria == 2);
    bool isSituacaoR = (situacao == 'R');

    if (isCategoria2 || isSituacaoR) {
        valorImposto = 0.05 * preco;
    } else {
        valorImposto = 0.08 * preco;
    }

    novoPreco = preco + valorAumento - valorImposto;

    if (novoPreco <= 50.0) {
        classificacao = "Barato";
    } else if (novoPreco > 50.0 && novoPreco <= 120.0) {
        classificacao = "Normal";
    } else {
        classificacao = "Caro";
    };

    cout << "\n--- Resultados ---" << endl;
    cout << "Valor do aumento: R$ " << valorAumento << endl;
    cout << "Valor do imposto: R$ " << valorImposto << endl;
    cout << "Novo preco: R$ " << novoPreco << endl;
    cout << "Classificacao: " << classificacao << endl;
}

void exercicio25() {
    double horasExtras;
    double horasFalta;

    cout << "Digite o numero de horas extras trabalhadas: ";
    cin >> horasExtras;
    cout << "Digite o numero de horas de falta: ";
    cin >> horasFalta;

    double minutosExtras = horasExtras * 60;
    double minutosFalta = horasFalta * 60;

    double H = minutosExtras - ((2.0 / 3.0) * minutosFalta);
    
    double premio;

    if (H >= 2400) {
        premio = 500.00;
    } else if (H >= 1800 && H < 2400) {
        premio = 400.00;
    } else if (H >= 1200 && H < 1800) {
        premio = 300.00;
    } else if (H >= 600 && H < 1200) {
        premio = 200.00;
    } else {
        premio = 100.00;
    }

    cout << "\n--- Resultado ---" << endl;
    cout << "O valor de H e: " << H << " minutos" << endl;
    cout << "O premio de Natal e: R$ " << premio << endl;
}

int main() {
    int opcao;

    do {
        cout << "\n===== Tarefa 2 =====" << endl;
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
        cout << "11 - Exercício 11" << endl;
        cout << "12 - Exercício 12" << endl;
        cout << "13 - Exercício 13" << endl;
        cout << "14 - Exercício 14" << endl;
        cout << "15 - Exercício 15" << endl;
        cout << "16 - Exercício 16" << endl;
        cout << "17 - Exercício 17" << endl;
        cout << "18 - Exercício 18" << endl;
        cout << "19 - Exercício 19" << endl;
        cout << "20 - Exercício 20" << endl;
        cout << "21 - Exercício 21" << endl;
        cout << "22 - Exercício 22" << endl;
        cout << "23 - Exercício 23" << endl;
        cout << "24 - Exercício 24" << endl;
        cout << "25 - Exercício 25" << endl;
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
                cout << "Saindo do programa. Até mais!" << endl;
                break;
            default:
                cout << "Opção inválida! Por favor, tente novamente." << endl;
                break;
        }

    } while (opcao != 0);
    return 0;
}