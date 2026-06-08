#include <stdio.h>
int main() {
    int opcao;
    int resposta;
    printf("=====================================\n");
    printf(" TEMPLO DOS ENIGMAS EM C\n");
    printf("=====================================\n\n");
    printf("Voce acordou dentro de um templo antigo.\n");
    printf("As paredes possuem simbolos misteriosos e tochas acesas.\n");
    printf("Na sua frente existe um portal fechado por tres enigmas.\n");
    printf("Para escapar, voce precisa resolver todos eles.\n\n");
    printf("1 - Iniciar jogo\n");
    printf("2 - Ver instrucoes\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);
    if (opcao == 1) {
        printf("\nO desafio vai comecar...\n");
        printf("\n=====================================\n");
        printf("ENIGMA 1 - O NUMERO SECRETO\n");
        printf("=====================================\n");
        printf("Na parede aparece a seguinte mensagem:\n");
        printf("\"Sou maior que 10, menor que 20, e sou divisivel por 3. Quem sou eu?\"\n");
Templo dos Enigmas em C - Guia de commits no GitHub Página 5
        printf("Digite sua resposta: ");
        scanf("%d", &resposta);
        if (resposta == 12 || resposta == 15 || resposta == 18) {
            printf("\nCorreto! O primeiro simbolo do portal acendeu.\n");
        } else {
            printf("\nErrado! O primeiro simbolo continuou apagado.\n");
        }
    } else if (opcao == 2) {
        printf("\nInstrucoes:\n");
        printf("Resolva os enigmas para abrir o portal do templo.\n");
        printf("Cada resposta correta libera o proximo enigma.\n");
        printf("Se errar, o portal permanecera fechado.\n");
    } else if (opcao == 3) {
        printf("\nSaindo do jogo...\n");
    } else {
        printf("\nOpcao invalida.\n");
    }
    return 0;
}
