#include<stdio.h>
void bubble_sort(int *arr,int n)
{
	int i,j,temp,p,sc;
	for(p=1;p<=n;p++)
	{
		sc=0;
		for(i=0,j=1;j<n-p;i++,j++)
		{
			if(arr[i]>arr[j])
			{
				sc++;
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		if(sc==0)
		{
			break;
		}
	}
	printf("hi\n");
}
int main()
{
	int n,i,arr[100],temp;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
	for(i=0;i<n;i++)
	{
	    	printf("%d ",arr[i]);
	
	}
}
