#include<stdio.h>
int main()

{ int i,j,k;
  int a[i][j];
    int b[i][j];
    int product[i][j];
    int sum=0,sum1=0;
    int add[i][j];
	int arows,acols,brows,bcols;
	printf("enter the rows and cols:");
	scanf("%d %d",&arows,&acols);
	printf("enter the matrix a:\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<acols;j++)
		{
			scanf("%d",&a[i][j]);
			
		}
	}
	printf("enter rows and cols of b:");
	scanf("%d %d",&brows,&bcols);
	if(brows!=acols)
	{
		printf("sorry we cant multiply:");
		
	}
	else
	{
	printf("enter the matrix b:\n ");
	for(i=0;i<brows;i++)
	{for(j=0;j<bcols;j++)
	{
		scanf("%d",&b[i][j]);
	}
	
	}}
	printf("multiplication of  matrix:\n");
	for(i=0;i<arows;i++)
	{
		for(j=0;j<bcols;j++)
		{
			sum1+=a[i][j]+b[i][j];
			for(k=0;k<brows;k++)
			{
				sum+=a[i][j]*b[i][j];
			}
			product[i][j]=sum;
			sum=0;
			add[i][j]=sum1;
			sum1=0;
		}
	}
for(i=0;i<arows;i++)
{
	for(j=0;j<brows;j++)
	{
		printf("   %d  ",product[i][j]);
	}  printf("\n");
}
printf("matrix addition:");
for(i=0;i<arows;i++)
{
	for(j=0;j<bcols;j++)
	{
		printf(" %d ",add[i][j]);
	}
	printf("\n");
}

}
