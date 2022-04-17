#include <stdlib.h>
#include <stdio.h>
#include "tad.h"
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define BLUE "\x1b[34m"
#define WHITE "\x1b[00m"

struct pilha{
 int qtd;
 char ver[max];
};

Pilha* criar(){
  Pilha *pi;
  pi = (Pilha*)malloc(sizeof(struct pilha));
  if(pi!=NULL)
     pi->qtd = 0;
  return pi;
}

int ler_palavra(Pilha *pi, char palavra[max]){
  printf("Digite uma palavra com %d letras\n",max-1);
  fflush(stdout);
  for(int i = 1; i < max ; i++){
       palavra[0] = '0';
  scanf("%c",&palavra[i]);}
  
  for(int i = 0; i < max  ; i++){
    inserir(pi,palavra[i]); 
  }
  return (1);
  }
int inserir(Pilha *pi, char i){
  if(pi!=NULL){
    pi->ver[pi->qtd] = i;
    pi->qtd++;
    }
  return(0);
}

Pilha* inverte(Pilha *pi){
  Pilha *aux=criar();
  Pilha *pilha_temp=pi;
  while(pi->qtd >= 0){
     aux->ver[aux->qtd] = pilha_temp->ver[pilha_temp->qtd];
     aux->qtd++;  
     pilha_temp->qtd--;
  }
  return (aux); 
}

void checar(Pilha *pi, Pilha *nova){
  int q = 0;
  printf(GREEN "\nPalavra | Inversa\n");
  for(int i = 1; i < max  ; i++){ 
    printf(WHITE "   %c    |    %c  \n",pi->ver[i],nova->ver[i]);
if(i>0){
  if(pi->ver[i] != nova->ver[i]){q++;}  
  }
}
  if(q > 0)
    printf(RED "A palavra não é um palíndromo");
  else
     printf(BLUE "A palavra é um palíndromo");
  //pause();
  }

void pause(){ //função de parada do script em distribuições linux / windows, usando compilação condicional. 
#ifdef __linux__ 
system("read -p \"Pressione qualquer tecla para continuar…\" saindo");
#elif _WIN32
system("pause");
#endif
}
