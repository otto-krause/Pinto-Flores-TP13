#include<stdio.h>
int main()
{ int v[5]; int m, f, s=0; float p;
  for (f=0; f<5; f++)
  {printf("Ingrese un valor: \n"); scanf("%i", &v[f]); m=v[0]; if (v[f]>m) m=v[f]; 
  }
  for (f=0; f<5; f++)
  {s=s+v[f];} p=(float)s/5;
  printf("El mayor de los valores es: %i\n El promedio es: %0.2f\n", m, p);
}