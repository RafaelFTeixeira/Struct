#include <stdio.h>

#define MAX_ANIMAL 3
typedef struct Animal {
  char nome[30];
} Animal;

void preencheOsAnimais(Animal animais[]);
void imprimaOsAnimais(Animal animais[]);

int main() {
  struct Animal animais[MAX_ANIMAL];

  preencheOsAnimais(animais);
  imprimaOsAnimais(animais);

  return 0;
}

void preencheOsAnimais(Animal animais[]) {
  printf("Digite os %d nomes dos animais: \n", MAX_ANIMAL);
  for(int i = 0; i < MAX_ANIMAL; i++) {
    scanf("%s", animais[i].nome);
  }
}

void imprimaOsAnimais(Animal animais[]) {
  printf("\nResultado: \n");
  for(int i = 0; i < MAX_ANIMAL; i++) {
    printf("%s\n", animais[i].nome);
  }
}