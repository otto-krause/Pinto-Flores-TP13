#include<stdio.h>
int main()
{int al[31], tn=0; for(int f=1; f<31; f++) { printf("Ingres la nota del alumno %i: ",f); scanf("%i", &al[f]); tn=tn+al[f]; 
  }
 float p=(float)tn/30; printf("El promedio es %0.2f\n", p);
}