#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
   char nome[30];
   float preco;
} produto;

typedef struct lstItem{
   produto dado;
   struct lstItem *next;
} lstProduto;

/* Criacao da lista: retorna uma lista vazia */
lstProduto *cria_lista(){
   return NULL;
}

/*
   Imprime a lista.
   Esta funcao é um exemplo de como percorrer uma lista encadeada.
*/
void print(lstProduto *lista)
{
   /* "atual" é um ponteiro para o elemento da lista que esta sendo examinado. Inicialmente, aponta para o primeiro elemento */
   lstProduto *atual = lista;

   while (atual != NULL)
   {
      printf(">>Nome: %s; Preco: %f\n", (*atual).dado.nome, atual->dado.preco);
      atual = atual->next;
   }
}

/*
   Procura, em lstProduto, um elemento cujos dados sejam igual ao "dado" passado como parametro .
   Retorna um ponteiro para o elemento da lista que contam o referido dado.
*/
lstProduto *busca(lstProduto *lista, produto dado)
{
   lstProduto *atual = lista;
   while (atual != NULL)
   {
      int retorno = strcmp(atual->dado.nome, dado.nome);
      if (retorno == 0 && atual->dado.preco == dado.preco)
      {
         return atual;
      }
      atual = atual->next;
   }
   return NULL;
}

/*
   Insere um novo elemento no inicio na lista.
   Retorna um ponteiro para a cabeca da lista.
*/
lstProduto *insere_no_inicio(lstProduto *lista, produto dado)
{
   lstProduto *novo = malloc(sizeof(lstProduto));
   (*novo).dado = dado;
   (*novo).next = lista;
   lista = novo;
   return lista;
}

/*
   Insere um novo elemento no final na lista.
   Retorna um ponteiro para a cabeca da lista.

*/
lstProduto *insere_no_fim(lstProduto *lista, produto dado){
   lstProduto *novo = malloc(sizeof(lstProduto));
   novo->dado = dado;
   novo->next = NULL;
   if (lista == NULL){
      return novo;
   }
   lstProduto *atual = lista;
   while (atual->next != NULL){
      atual = atual->next;
   }
   atual->next = novo;
   return lista;
}

/*
   Inserção do produto passado no parametro "dado" após a posicao que armazena o produto passado no paramero "posicao".
   Retorna um ponteiro para a cabeca da lista.
*/
lstProduto *insere_apos(lstProduto *lista, produto dado, produto posicao){
   lstProduto *novo = malloc(sizeof(lstProduto));
   novo->dado = dado;
   novo->next = NULL;
   lstProduto *atual = lista;
   lstProduto *findProduto = busca(lista,posicao);
   if (findProduto!=NULL){
      novo->next = findProduto->next;
      findProduto->next = novo;
   }
   
   return lista;
}
lstProduto *excluiElemento(lstProduto *lista, produto posicao){
   lstProduto *atual = lista;
   lstProduto *findProduto = busca(lista,posicao);

   if (findProduto==NULL){
      printf("Produto nao encontrado.\n");
      return lista;
   }
   lstProduto *anterior = lista;
   while (anterior->next != findProduto){
      anterior = anterior->next;
   }

   anterior->next = findProduto->next;
   return lista;
}

/* Execucao das rotinas necessarias para ler os dados de um novo produto */
produto *novo_produto(){
   produto *novo = malloc(sizeof(produto));
   printf("Nome do produto: ");
   scanf("%s", (*novo).nome);
   printf("Preco: ");
   scanf("%f", &((*novo).preco));
   return novo;
}

int main(){

   lstProduto *lista = cria_lista();

   int opcao = 0;

   while (opcao != 9){
      /* Imprime o menu de opcoes */
      printf("1 - Inserir no inicio da lista\n");
      printf("2 - Inserir no meio da lista\n");
      printf("3 - Inserir no fim da lista\n");
      printf("4 - Excluir elemento da lista\n");
      printf("5 - Imprimir a lista\n");
      printf("6 - Pesquisar\n");
      printf("9 - Encerrar o programa\n");
      printf("\nDigite a opcao desejada: ");
      scanf("%d", &opcao);
      printf("Opcao selecionada %d\n", opcao);

      if (opcao == 1){
         produto *novo = novo_produto();
         lista = insere_no_inicio(lista, *novo);
      }
      else if (opcao == 2){
         produto *novo = novo_produto();
         printf("Informe a posicao que o novo elemento deve ocupar:\n");
         produto *posicao = novo_produto();
         lista = insere_apos(lista, *novo, *posicao);
      }
      else if (opcao == 3){
         produto *novo = novo_produto();
         lista = insere_no_fim(lista, *novo);
      }
      else if (opcao == 4){
         produto *novo = novo_produto();
         lista = excluiElemento(lista, *novo);
      }
      else if (opcao == 5){
         print(lista);
         getchar();
      }
      else if (opcao == 6){
         produto *novo = novo_produto();
         lstProduto *p = busca(lista, *novo);
         if (p == NULL)
            printf("Produto nao encontrado.\n");
         else
            printf("Produto encontrado.\n");
         printf("\n pressione qualquer tecla para continuar\n");
         getchar();
         getchar();
      }
   }
}
