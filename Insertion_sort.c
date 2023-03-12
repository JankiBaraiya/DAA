#include<stdio.h>
void main()
{
	int a[100000],n,i,j,x;
	
	printf("How many element you want in array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Element");
		scanf("%d",&a[i]);
	}
	
	
	for(i=1;i<n;i++)
	{
		x=a[i];
		j=i-1;
		
		while(x<a[j] && j>-1)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=x;
	}
	
	for(j=0;j<n;j++)
	{
		printf("%d \n",a[j]);
	}
}
