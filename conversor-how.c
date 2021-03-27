#include <stdio.h>
#include <math.h>
#include <string.h>

//Chamadas das fun��es

int converterBin2Dec(long long valor_binario);

long long converterDec2Bin(int valor_decimal);

int main()

{
    //Vari�veis usadas

    int opc = ' ';

    long long valor_binario;

    int valor_decimal, cociente;

    int sequencial, valor_temp, tamanho_string;

    //Enquanto n�o for a op��o 0 (Sair)

    while (opc != 0) {

        //Mostra o menu principal
        printf("Digite a Opcao\n");

        printf("1 - Binario para Decimal\n");

        printf("2 - Decimal para Binario\n");

        printf("0 - Sair\n");

        printf("Resposta: ");

        scanf("%d", &opc);

        getchar();

        //Op��o 1 - Bin�rio -> Decimal

        if (opc == 1) {

            printf("Digite numero binario: ");

            scanf("%lld", &valor_binario);

            printf("[%lld] em binario = [%d] em decimal\n", valor_binario, converterBin2Dec(valor_binario));

        }

        //Op��o 2 - Decimal -> Bin�rio

        else if (opc == 2) {

            printf("Digite o numero decimal: ");

            scanf("%d", &valor_decimal);

            printf("[%d] em decimal = [%d] em binario\n", valor_decimal, converterDec2Bin(valor_decimal));

        }

        //Op��o desconhecida

    else {
            printf("Opcao desconhecida [%d]\n", opc);
        }

    }
    return 0;
}
//Fun��o para converter Bin�rio para Decimal
int converterBin2Dec(long long valor_binario)
{
    int valor_decimal = 0, sequencial = 0, resto;

    //Enquanto existir valor no bin�rio
    while (valor_binario != 0)
    {
        //Pega o resto da divis�o do valor bin�rio por 10
        resto = valor_binario % 10;

        //Divide o valor bin�rio por 10
        valor_binario /= 10;

        //Incrementa o valor decimal com o resto da divis�o multiplicado por 2 elevado ao sequencial
        valor_decimal += resto * pow(2, sequencial);

        //Incrementa a sequencial
        ++sequencial;
    }
    return valor_decimal;
}

//Fun��o para converter Decimal para Bin�rio
long long converterDec2Bin(int valor_decimal)
{
    long long valor_binario = 0;
    int resto, sequencial = 1;

    //Enquanto o valor decimal for diferente de zero
    while (valor_decimal != 0)
    {
        //Pega o resto da divis�o
        resto = valor_decimal % 2;

        //Divide o valor decimal por 2
        valor_decimal /= 2;

        //Incrementa o valor bin�rio, multiplicando o resto da divis�o pelo sequencial
        valor_binario += resto * sequencial;

        //Multiplica o sequencial por 10
        sequencial *= 10;
    }
    return valor_binario;
}
