#include<stdio.h>
void bbsort(int [ ], int);
int main() {
    int i,a[30],n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    bbsort(a,n);
    printf("After sorting:\n");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}

void bbsort(int p[ ], int n) {
    int i,j,temp;
    for(i=0;i<n-1;i++)
        for(j=0;j<n-1-i;j++)
            if(p[j]>p[j+1])
            {
                temp=p[j];
                p[j]=p[j+1];
                p[j+1]=temp;
            }
}
