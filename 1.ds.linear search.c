#include<stdio.h>
int linearsearch(int[ ] ,int);
int main() {
    int i,a[30],n,k;
    printf("Enter no. of elements: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);
    printf("Enter the Key: ");
    scanf("%d",&key);
    k=linearsearch(a,n);
    if(k==-1)
        printf("Key is not Found.");
    else
        printf("Key is found at %d index.",k);
}

int linearsearch(int* p, int n) {
    int i;
    for(i=0;i<n;i++)
        if(key== *(p+i))
            return i;
    return -1;
}
