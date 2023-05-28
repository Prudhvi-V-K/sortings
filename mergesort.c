#include<stdio.h>
void Mergesort(int[],int ,int);
void Merge(int[],int ,int ,int);
void main(){
    int n,a[20],i,low,high;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    Mergesort(a,0,n-1);
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
void Mergesort(int a[],int low ,int high){
    int mid,i,j;
    if(low<high){
        mid=(low+high)/2;
        Mergesort(a,0,mid);
        Mergesort(a,mid+1,high);
        Merge(a,low,mid,high);
    }
}
void Merge(int a[],int low,int mid ,int high){
    int b[10],i,j,k;
    i=low;
    j=mid+1;
    k=low;
    while(i<=mid&&j<=high){
        if(a[i]>a[j]){
            b[k]=a[j];
            k++;
            j++;
        }
        else{
            b[k]=a[i];
            k++;
            i++;
        }
    }
    if(i>mid){
        while(j<=high){
            b[k]=a[j];
            j++;k++;
        }
    }
    else{
        while(i<=mid){
            b[k]=a[i];
            i++;k++;
        }
    }
for(i=low;i<=high;i++)
a[i]=b[i];
}