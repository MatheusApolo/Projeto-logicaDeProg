#include <stdio.h>

int main() {
    int opcao;

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
