#include <stdio.h>
#include <conio.h>

long int factorial(long int);

void main()
{
   long int m,res;
	printf("Ingrese numero entero (0<=n<=12):");		// long int tiene capacidad para guardar hasta el resultado de 12! (unsigned long int, aunque me duplica la capacidad, tambien)
   scanf("%ld",&m);
   res=factorial(m);
   printf("\nEl factorial de ese numero es: %ld",res);
	getch();
}

long int factorial(long int n)		// Si n=0 me devuelve 1 porque sale del for
{
   long int j,fac=1;
   for(j=1;j<=n;j++)
   	fac*=j;
   return(fac);
}

