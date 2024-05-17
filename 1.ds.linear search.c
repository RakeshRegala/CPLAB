#include<stdio.h>

int linearsearch(int[ ] ,int, int);
int main() {
    int i,a[30],n,r,key;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter the Key: ");
    scanf("%d",&key);
    r=linearsearch(a,n,key);
    if(r==-1)
        printf("Key is not Found.");
    else
        printf("Key is found at %d index.",r);
}

int linearsearch(int a[], int n, int key) {
    int i;
    for(i=0;i<n;i++)
        if(key== a[i])
            return i;
    return -1;
}
