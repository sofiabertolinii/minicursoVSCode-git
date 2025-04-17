#include<stdio.h>

/*
    a soma
a diferença entre o maior e o menor
a média
e o resto da divisão entre o maior e o menor.
*/

int n1, n2;
int dif;

printf("Digite dois numeros");
scanf("%d %d",n1,n2);

printf("\n\tSoma: %d", n1+n2);

if(n1>n2){
    dif = n1-n2;
    resto = n1%n2;
} else {
    dif = n2-n1;
    resto = n1%n2
}
printf("\n\tDiferença entre o maior e o menor: %d", dif);

float media = (n1+n2)/2.0;
printf("\n\tA media entre eles: %.2f", media);
printf("\n\tResto da divisão entre o maior e o menor: %d", resto);
