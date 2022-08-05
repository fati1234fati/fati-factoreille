#include <stdio.h>
#include <stdlib.h>

int main()
{
 int nbr, i, f = 1;
 printf("entrer un nombre pour calculer le factorielle\n");
 scanf("%d", &nbr);
 if ( nbr < 0)
 printf("imposible ! ");
 else
 for (i = 1; i <= nbr; i++)
 f = f * i;
 printf(" la factorielle de %d\n",f);
   return 0;
}
