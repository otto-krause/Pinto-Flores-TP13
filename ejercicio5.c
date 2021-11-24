   
#include<stdio.h>
int main()
{ int tuv[22], tu=0, in=0, m=0; tuv[20]=0; for (int f=1; f<21; f++) { for (int i=1; i<16; i++) {
  printf("Ingrese el total de unidades vendidas del vendedor %i en el dia %i:\n",f,i); scanf("%i", &tuv[i]); tu+=tuv[i]; tuv[i]+=in; tuv[21]+=in; if(in>tuv[20]){tuv[20]=in;}
  } printf("El total de unidades vendidas es %i\n",tu); }
  printf("El vendedor con la mayor venta diaria es %i\n", tuv[20]);
}