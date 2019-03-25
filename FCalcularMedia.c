/* Um programa para calcular medias Aritimeticas e Ponderadas de 3 notas. Obs: Eh possivel escolher o peso das notas.
   By: Filipe Moreno - www.filipemoreno.com.br
   Versao: 1.1 - 25/03/2019
*/
#include <dos.h>
#include <stdio.h>
int main()
    {
        int a, b, c, opcao;
        printf("\n");
        printf("    Escolha uma opcao abaixo:\n  ");
        printf("    '1' - Media Aritmetica.\n    ");
        printf("  '2' - Media Ponderada.\n");
        printf("\n");
        printf(" ---> ");
        scanf("%d", &opcao);

switch(opcao)
{
    float p1, p2, p3, medari, nota1, nota2, nota3, mediapond, peso1, peso2, peso3, totalpeso;
    case 1:
        system("@cls||clear");
        printf("\n");
        printf("  Voce escolheu 'Media Aritimetica'");
        printf("\n  Aguarde 2 segundos...");
        printf("\n");
        sleep(2);
        system("@cls||clear");
        printf("\n");
        printf("    Digite o valor da prova '1': ");
        scanf("%f", &p1);
        printf("\n");
        printf("    Digite o valor da prova '2': ");
        scanf("%f", &p2);
        printf("\n");
        printf("    Digite o valor da prova '3': ");
        scanf("%f", &p3);
        printf("\n");
        printf("    Calculando...\n");
        printf("\n");
        sleep(1);
        medari = (p1 + p2 + p3) / 3;
        printf("\n");
        printf("    Media: %.2f", medari);
        printf("\n");
        return outro();
    case 2:
        system("@cls||clear");
        printf("\n");
        printf("  Voce escolheu 'Media Ponderada'");
        printf("\n  Aguarde 2 segundos...");
        printf("\n");
        sleep(2);
        system("@cls||clear");
        printf("\n");
        printf("    Digite a 'NOTA' da prova '1': ");
        scanf("%f", &nota1);
        printf("    Digite o 'PESO' da prova '1': ");
        scanf("%d", &peso1);
        printf("\n");
        printf("    Digite a 'NOTA' da prova '2': ");
        scanf("%f", &nota2);
        printf("    Digite o 'PESO' da prova '2': ");
        scanf("%d", &peso2);
        printf("\n");
        printf("    Digite a 'NOTA' da prova '3': ");
        scanf("%f", &nota3);
        printf("    Digite o 'PESO' da prova '3': ");
        scanf("%d", &peso3);
        totalpeso = peso1 + peso2 + peso3;
        mediapond = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / totalpeso;
        printf("\n");
        printf("    Calculando...\n");
        printf("\n");
        sleep(1);
        printf("\n");
        printf("    Media: %f\n", mediapond);
        printf("\n");
        return outro();
    default:
        printf("\n");
        printf("    ERRO! Escolha uma opcao valida e tente novamente");
        printf("\n");
        return main();
    }
    }
int outro()
{
    int opcao;
    printf("\n");
    printf("    Voce deseja realizar outra operacao?\n  ");
    printf("    '1' - Sim.\n    ");
    printf("  '2' - Nao.\n");
    printf("\n");
    printf(" ---> ");
    scanf("%d", &opcao);

switch(opcao)
{
case 1:
    system("@cls||clear");
    return main();

case 2:
    system("@cls||clear");
    printf("\n");
    printf("    Sessao finalizada! Obrigado por utilizar esse programa!\n");
    printf("    Acesse: www.filipemoreno.com.br");
    printf("\n");
    return 0;

default:
        printf("\n");
        printf("    ERRO! Escolha uma opcao valida e tente novamente");
        printf("\n");
    return outro();
}
}
