#include<stdio.h>
void Selectionsort(int a[],int n);
void main(){
    int i,n,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Selectionsort(a,n);
    printf("Sorted List:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
}
void Selectionsort(int a[],int n){
    int temp,i,j,min;
    for(i=0;i<n-1;i++){
        min=i;
        for(j=i+1;j<n;j++){
       if( a[min]>a[j]){
     min=j;
       }
       if(min!=i){
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
      }

        }

    }
}