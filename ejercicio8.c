#include<stdio.h>
int main()
{ int s; printf("Ingrese el numero de sucesiones: "); scanf("%i",&s); int v[3]; v[0]=s; v[3]=1;
  for(int f=0; f<v[0]; f++) { v[1]=v[2]+v[3]; printf("- %i\n",v[1]); v[2]=v[3]; v[3]=v[1];
  } return 0;
}