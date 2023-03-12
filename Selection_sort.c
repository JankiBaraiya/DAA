#include<stdio.h>
void main()
{
	int a[100000],i,j,minj=0,minx=0,n;
	
	printf("How many element you want in array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Element");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-2;i++)
	{
		minj=i;
		minx=a[i];
		
		for(j=i+1;j<n-1;j++)
		{
			if(a[j]<minx)
			{
				minj=j;
				minx=a[j];
			}
			a[minj]=a[i];
			a[i]=minx;
		}
	}
	
	
	
	for(j=0;j<n;j++)
	{
		printf("%d \n",a[j]);
	}
}
