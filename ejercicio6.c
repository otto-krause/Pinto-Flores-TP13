#include<stdio.h>
int main()
{ int s[20], m=0, h=0; s[0]=0; for(int f=1; f<21; f++) {printf("Ingrese el sueldo de la persona %i: \n", f); scanf("%i", &s[f]);  
  if (s[f]>2000){h++;} else if(s[f]<2000) m++; 
 }
printf("El nro de personas que ganan mas de 2000 son: %i\nEl nro de personas que ganan menos de 2000 son: %i\n", h, m);
}