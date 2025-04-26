/*I. Sabemos que, em uma TAD qualquer, possuímos elementos que se ligam de uma forma lógica com 
outros elementos. Para que tenhamos uma TAD sem erros, implemente um registro com suas 
funcionalidades necessárias. O que mais se poderia colocar caso o código esteja relacionado, 
por exemplo, com um sistema de cartão de crédito?*/

//Implementamos o registo em STRUCT com os dados necessarios para o sistema de um certo cartão

#include <stdio.h>
#include <stdlib.h>

typedef struct Cartao{

    //Dados do cartão
    int numero_do_cartao, cpf, senha;
    char nome[50];
    float saldo, limite;

    //Aponta para novos dados de um outro cartão
    struct Cartao *prox;

}cartao;

/*Além disso, dentro da main é necessário funções que auxiliam na certificação das TAD's
alocar memória corretamente, preencher dados, acessar informações, alterar dados de forma segura
e desalocar da memória depois de usado.*/

/*II. Inspecione o código abaixo com cuidado. No fim da execução, o valor de x
permanece o mesmo ou foi alterado? Caso sim, ele recebeu o número de
um endereço de memória? A qual variável pertence o valor de *p, x, a ou k?*/

int main(){
    int x = 1;
    printf("O valor de x: %d\n", x);
    int *p = &x;
    printf("O valor de *p: %d\n", *p);
    *p = x;
    printf("O valor de x e: %d\n", x);
    int a = (*p);
    printf("O valor de a e: %d\n", a);
    int *k = &a;
    printf("O valor de *k e: %d\n", *k);
    x = a;
    printf("O valor de x e: %d\n", x);
    p = k;
    printf("O valor de p e: %d\n", p);
    a = x;
    printf("O valor de a e: %d\n", a);

    return 0;
}