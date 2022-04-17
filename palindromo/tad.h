/* 
Todas as funções foram pensadas para o perfeito funcionamento do que foi requerido, a função 'ler_palavra' já contem em sua estrutura a função inserir, logo a mesma não precisa ser utilizada, por se tratar de uma lista estática o tamanho das palavras e da pilha é definida pela variavel max. 
*/

#define max 12

typedef struct pilha Pilha;

Pilha* criar();

int ler_palavra(Pilha *pi, char i[max]);

int inserir(Pilha *pi, char i); //Não necessario no main.

Pilha* inverte(Pilha *pi);

void checar(Pilha *, Pilha *);

void pause();

