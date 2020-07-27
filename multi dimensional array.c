#include<stdio.h>
void main()
{
  int a,b,c,d,e,f;
  int *ar[0][3][4];
for(a=0;a<2;a++)
 {
   for(b=0;b<4;b++)
   {
		for(c=0;c<3;c++)
		{
		   printf("element in %d and %d  element",b,c);
		   scanf("%d",&ar[a][b][c]);
	}
	printf("\n");
}
    printf("\n");
}
for(d=0;d<2;d++)
 {
   for(e=0;e<4;e++)
   {
		for(f=0;f<3;f++)
		{
		   printf("matrix is");
		   printf("%d",&ar[e][f][f]);
	    }
	}
	printf("\n");
 }
    printf("\n");
}

