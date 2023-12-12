#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int opcao;
    char admissao[200];
    char contratacao[200];
    char endereco[200];
    char telefone[200];
    char nomesalario[200];
    char salarioatual[200];
    char salarionovo[200];
    char nomepromovido[200];
    char cargopromovido[200];
    char demissao[200];
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;

    do
    {

        printf("\n");
    printf("-----Selecione sua preferencia-----\t\n");
    printf("   1   | Realizar uma admissão\n");
    printf("   2   | Consultar Salário\n");
    printf("   3   | Consultar promoções\n");
    printf("   4   | Demissões\n");
    printf("   5   | Consultar atualizações\n");
    printf("   6   | Sair do programa\n");
    printf("-------------------------------\t\n");
        printf("\n");

        printf("Escolha uma op??o: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            printf("Digite o nome do novo contratado: ");
            scanf("%s", &admissao);
            printf("Tipo de contrata??es:\n");
            scanf("%s", &contratacao);
            printf("Informe seu endere?o:\n");
            scanf("%s", &endereco);
            printf("informe o n?mero de telefone:\n");
            scanf("%s", &telefone);
            printf("\n");
            printf("Carregando admiss?o...\n");

            i++;

            break;
        case 2:
            printf("Em qual funcion?rio ser? feito o reajuste?: ");
            scanf("%s", &nomesalario);
            printf("Qual ? o salario atual de %s?:", nomesalario);
            scanf("%s", &salarioatual);
            printf("Em quanto ficar? o sal?rio de %s?: ", nomesalario);
            scanf("%s", &salarionovo);
            printf("\n");
            printf("O sal?rio de %s mudou de %s para %s \n", nomesalario, salarioatual, salarionovo);

            j++;

            break;
        case 3:
            printf("Qual funcion?rio ser? promovido?:\n");
            scanf("%s", &nomepromovido);
            printf("Qual ser? o futuro cargo de %s:\n", nomepromovido);
            scanf("%s", &cargopromovido);
            printf("\n");
            printf("O funcion?rio %s agora ? %s \n", nomepromovido, cargopromovido);

            k++;

            break;
        case 4:
            printf("Digite o nome do funcion?rio a ser demitido: ");
            scanf("%s", &demissao);
            printf("\n");
            printf("Enviando aviso...\n");

            l++;

            break;
        case 5:
            printf("- Atualiza??es: \n");
            printf("Contrata??es: %d\n", i);
            printf("Ajuste salarial: %d \n", j);
            printf("Promo??es: %d \n", k);
            printf("Demiss?es: %d \n", l);
            printf("\n");

            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (opcao != 0);

    return 0;
}
