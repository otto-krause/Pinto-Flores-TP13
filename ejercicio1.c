#include <stdio.h>
int main()
{int r[6]; int f=0; 
 r[0]=0;
 for(f=1; f<6; f++) {printf("Ingrese un valor: \n"); scanf("%i", &r[f]);
}
 for(f=1; f<6; f++) {r[0]= r[0]+r[f]; printf("La resistencia total de: %i\n", r[f]);
}
 printf("Es: %i\n", r[0]);
return 0;
}
