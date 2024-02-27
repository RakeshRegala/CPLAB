/* BUBBLE SORT*/
#include<stdio.h>
void bubblesort(int *,int);   //prototype
int main()
{
	int n,a[100],i;
	printf("enter no of elements:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	bubblesort(a,n);		//(&a[0],n)				//calling funtion
	printf("sorted list:\n");
	for(i=0;i<n;i++)
		printf("%d",a[i]);
	return 0;
}
void bubblesort(int *a,int n)       //(int a[],int n)                       //called funtion
{
	int temp,i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}
