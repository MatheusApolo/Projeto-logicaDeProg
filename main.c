#include <stdio.h>
#include <string.h>

int enigmaNumeroSecreto() {

  int resposta;

  printf("\n=====================================\n");
  printf("ENIGMA 1 - O NUMERO SECRETO\n");
  printf("=====================================\n");
  printf("Na parede aparece a seguinte mensagem:\n");
  printf("\"Sou maior que 10, menor que 20, e sou divisivel por 3. Quem sou eu?\"\n");
  printf("Digite sua resposta: ");
  
  scanf("%d", &resposta);

  if (resposta == 12 || resposta == 15 || resposta == 18) {
    printf("\nCorreto! O primeiro simbolo do portal acendeu.\n");
      return 1;
} else {

  printf("\nErrado! O primeiro simbolo continuou apagado.\n");
    
return 0;
}
  
}
  int enigmaPalavraChave() {
  
    char resposta[30];

    printf("\n=====================================\n");
    printf("ENIGMA 2 - A PALAVRA DO TEMPLO\n");
    printf("=====================================\n");
    printf("Uma inscricao antiga diz:\n");
    printf("\"Tenho chaves, mas nao abro portas. Tenho espaco, mas nao sou uma sala. O que sou?\"\n");
    printf("Digite sua resposta: ");
    
    scanf("%s", resposta);
    
if ( strcmp(resposta, "teclado") == 0 || strcmp(resposta, "Teclado" ) == 0) {
  printf("\nCorreto! O segundo simbolo do portal acendeu.\n");
    return 1;
  
} else {
  printf("\nErrado! O segundo simbolo continuou apagado.\n");
    return 0;
}
    
}
  int enigmaSequencia() {
    
  int resposta;
    
  printf("\n=====================================\n");
  printf("ENIGMA 3 - A SEQUENCIA DO PORTAL\n");
  printf("=====================================\n");
  printf("No chao do templo aparece a sequencia:\n");
  printf("3, 6, 12, 24, ?\n");
  printf("Digite o proximo numero: ");
    
  scanf("%d", &resposta);
    
if (resposta == 48) {
  
printf("\nCorreto! O terceiro simbolo do portal acendeu.\n");
return 1;
  
} else {
  
printf("\nErrado! O terceiro simbolo continuou apagado.\n");
return 0; 
}
    
}
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
enigmaNumeroSecreto();
enigmaPalavraChave();
enigmaSequencia();
} else if (opcao == 2) {
