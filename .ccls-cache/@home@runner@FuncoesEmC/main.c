#include <stdio.h>

void DizerBomDia(char nome[20]){
  printf("Bom dia %s!\n", nome);
}
void DizerBoaTarde(char nome[20]){
  printf("Boa tarde %s!\n", nome);
}
void DizerBoaNoite(char nome[20]){
  printf("Boa noite %s!\n", nome);
}

int main(void){
  DizerBomDia("João");
  DizerBoaTarde("Márcio");
  DizerBoaNoite("Vitor");
  return 0;
}