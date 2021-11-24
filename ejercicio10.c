#include<stdio.h>
int main()
{ int v[10], s=0, m=1, d=0; float p=0; v[0]=0; for(int f=1; f<11; f++){printf("Ingrese los valores del vector: "); scanf("%i",&v[f]);}
  for(int f=1; f<11; f++) {s=s+v[f]; m=m*v[f];} p=(float)s/10; for(int f=1; f<11; f++) {if(v[f]<p) d++;
  } printf("La suma de los elementos del vector es: %i\nEl producto de los elementos del vector es: %i\nEl promedio del vector es: %0.2f\n",s ,m ,p);
    printf("La cantidad de elementos del vector menores al promedio es: %i\n",d);
}