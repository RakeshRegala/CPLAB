#include<stdio.h>
void inssort(int [ ], int);
int main() {
    int i,a[30],n;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    inssort(a,n);
    printf("After sorting:\n");
    for(i=0; i<n; i++)
        printf("%d ",a[i]);
}

void inssort(int p[ ], int n) {
    int i, j, item;
    for(i=1; i<n; i++)
    {
        item = p[i];
        for(j=i-1; j>=0 && p[j]>item; j--)
            p[j+1] = p[j];
        p[j+1] = item;
    }
}
