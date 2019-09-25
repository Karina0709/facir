#include <stdio.h>
#include <stdlib.h>

int main()
{
    float qa,qm,qn,qd;


    printf("Insira quantidade atual do estoque: \n");
    scanf("%f",&qa);
        printf("Insira quantidade maxima do estoque: \n");
        scanf("%f",&qm);
            printf("Insira quantidade minima do estoque: \n");
            scanf("%f",&qn);

    qd=(qm+qn)/2;

    if(qa>=qd){
        printf("Nao efetuar compra.\n\n");
    }else{
        printf("Efetuar compra.\n\n");
    }

    return 0;

}
