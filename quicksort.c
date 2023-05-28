#include<stdio.h>
void Quicksort(int [],int,int);
void main(){
    int a[20],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Unsorted List\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\nQUICK SORT\n");
    Quicksort(a,0,n-1);
    printf("Sorted List\n");
    for(i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
}
void Quicksort(int a[],int left,int right){
    int pivot,i,j,l,r,t,temp;
    if(left<right){
        pivot=a[left];
        l=left;
        r=right;
        while(l<r){
            while(a[l]<=pivot&&l<=right)
            l++;
            while(a[r]>pivot)
            r--;
            if(l<r){
                t=a[l];
                a[l]=a[r];
                a[r]=t;
            }
        }
        temp=a[left];
        a[left]=a[r];
        a[r]=temp;
        Quicksort(a,left,r-1);
        Quicksort(a,r+1,right);
    }
}
