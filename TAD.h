#ifndef TAD_H_INCLUDED
#define TAD_H_INCLUDED
typedef struct no{
    unsigned char caracter;
    int frequencia;
    struct no *esq, *dir, *proximo;
}No;

typedef struct{
    No *inicio;
    int tam;
}Lista;


void inicializa_tabela_com_zero(unsigned int tab[]);

void preenche_tab_frequencia(unsigned char texto[], unsigned int tab[]);

void imprime_tab_frequencia(unsigned int tab[]);


void criar_lista(Lista *lista);

void inserir_ordenado(Lista *lista, No *no);

void preencher_lista(unsigned int tab[], Lista *lista);

void imprimir_lista(Lista *lista);


No* remove_no_inicio(Lista *lista);

No* montar_arvore(Lista *lista);

void imprimir_arvore(No *raiz, int tam);


int altura_arvore(No *raiz);

char** aloca_dicionario(int colunas);

void gerar_dicionario(char **dicionario, No *raiz, char *caminho, int colunas);

void imprime_dicionario(char **dicionario);


int calcula_tamanho_string(char **dicionario, unsigned char *texto);


char* codificar(char **dicionario, unsigned char *texto);





#endif // TAD_H_INCLUDED

