#include<stdio.h>

int pivot(int a[],int i,int j)
{
	int p=a[i],temp;
	int k=i,l=j+1;
	while(a[k]<=p && k>=j)
	{
		k++;
	}
	while(a[l]>p)
	{
		l--;
	}
	
	while(k<l)
	{
		temp=a[k];
		a[k]=a[l];
		a[l]=temp;
		
		while(a[k]<=p && k>=j)
		{
			k++;
		}
		while(a[l]>p)
		{
			l--;
		}
	}
	temp=a[k];
	a[k]=a[i];
	a[i]=temp;
	return l;
}

int quickSort(int a[],int i,int j)
{
	if(i<j)
	{
		int position = pivot(a,i,j);
		quickSort(a,i,position-1);
		quickSort(a,position+1,j);
	}
}
void main()
{
	int a[10]={10,5,6,4,2,7,1,3,8,9};
	
	
	
}
