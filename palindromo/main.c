#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>
#include "tad.h"

int main(void) {
  Pilha *pi;
  char palavra[max];
  setlocale(LC_ALL, "");
  pi = criar();   
  ler_palavra(pi,palavra);
  Pilha *nova;
  nova = inverte(pi);
  checar(pi,nova); 
  return 0;
}