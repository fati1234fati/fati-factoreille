#include <stdio.h>
#include <stdlib.h>

 long factorial(int n )
 {
 int i;
 long fact=1;
 for (i = 1; i <= n ; i++)
 fact = fact * i;
 return fact;
 }
 int main ()
  {
 int nbr;
 printf("entrer un nombre pour calculer la factorielle\n");
 scanf("%d",&nbr);
 printf("%d! =%1d\n",nbr,factorial(nbr));
 return 0;
  }


