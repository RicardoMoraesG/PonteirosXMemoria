#include <stdio.h>
#include <stdlib.h>


int main() {
    /**
    * Exibe o comportamento basico dos ponteiros em relacao a posicao na memoria.
    */
    int soma, aux;
    int *p;
    printf("* == conteudo do endereco apontado por...");
    printf("\n& == endereco de...");

    printf("\n\nNAO INICIALIZADOS");

        printf("\nsoma == %i ", soma);
        //printf("\n*soma 1= %i ", *soma); //a variavel soma não é ponteiro, então não funciona mostrar o conteudo acrecentando *soma;
        printf("\n&soma == %i ", &soma);

        printf("\n aux == %i ", aux);
        //printf("\n*aux 1= %i ", *aux);//a variavel aux não é ponteiro, então não funciona mostrar o conteudo acrecentando *aux;
        printf("\n&aux == %i ", &aux);

        printf("\np == %i ", p);
        printf("\n*p == %i ", *p);
        printf("\n&p == %i \n", &p);

    printf("\n\nDEPOIS DE INICIALIZADOS");
        soma = 50;
        printf("\n  soma == %i", soma);

        p = &soma;
        printf("\nDepois que [p = &soma;]");
        printf("\n   p == %i ", p);
        printf("\n  *p == %i ", *p);
        printf("\n  &p == %i ", &p);

        aux = *p;
        printf("\nDepois que [aux = *p;] aux == %i ", aux);
        printf("\n  &aux == %i ", &aux);

        *p = *p + 1;
        printf("\n\nDEPOIS QUE [*p = *p + 1;]: ");
        printf("\n  *p = %i",*p);
        printf("\n  aux == %i ", aux);
        printf("\n  soma == %i", soma);

}
