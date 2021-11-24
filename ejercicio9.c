#include<stdio.h>
int main()
{ unsigned int c; printf("Ingrese la cantidad de nros de la lista: "); scanf("%i",&c); if(c<=0){printf("La lista debe ser distinta de 0");}
  int v[c]; for(int f=0; f<c; f++) { printf("Ingrese los nros: "); scanf("%i",&v[f]);
  }
  for (int f=1; f<c; f++) { if(v[f-1]<v[f]) {if(f==c-1) printf("Los valores se ingresaron de forma ascendiente\n"); continue;}
  if(v[f-1]>v[f]) {if(f==c-1) printf("Los valores se ingresaron de forma descendiente\n"); continue;}
  else {printf("Los valores se ingresaron de forma desordenada\n"); break;}
  } printf("La suma de el primer y ultimo valor es: %i\n",v[0]+v[c-1]);
}