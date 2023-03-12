#include<stdio.h>
#include<math.h>
void main()
{
	int a[1000000],b[1000000],n,k,i,j,c[k];
	
	printf("How many element you want in array :");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("Enter Element");
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<k;i++)
	{
		c[i]=0;
	}
	for(j=0;j<n;j++)
	{
		c[a[j]]=c[a[j]]+1;
	}
	for(i=1;i<k;i++)
	{
		c[i]=c[i]+c[i-1];
	}
	for(j=n-1;j<=0;j--)
	{
		b[c[a[j]]]=a[j];
		c[a[j]]=c[a[j]]-1;
	}
	
	for(j=0;j<n;j++)
	{
		printf("%d \n",a[j]);
	}
}
