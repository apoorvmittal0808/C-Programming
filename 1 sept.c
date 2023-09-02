#include<stdio.h>
main()
{
   int i,j,k;
   k=5;
   for(i=0;i<k;i++)
   {
   	for(j=i;j<=10;j++)
   	{
   		printf("\n%d*%d=%d",i,j,i*j);
   	}
	printf("\n");
   }
}
