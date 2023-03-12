#include<stdio.h>
void main()
{
	int a[100000],n,i,j,temp;
	
	printf("How many element you want in array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Element");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
		
	}
	
	for(j=0;j<n;j++)
	{
		printf("%d \n",a[j]);
	}
}
