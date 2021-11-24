   
#include<stdio.h>
int main()
{ int n[15]; n[0]=0; for(int f=1; f<16; f++) {printf("Ingrese la nota del alumno %i: \n", f); scanf("%i", &n[f]);
  if(n[f]>8){printf("El alumno %i se saco un %i, que es mayor que 8 \n", f, n[f]); } 
 }
}