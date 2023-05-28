#include<stdio.h>
void Bubblesort(int a[],int n);
int main(){
    int i,n,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    Bubblesort(a,n);
    printf("The Sorted List Is:\t");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
void Bubblesort(int a[],int n){
    int temp,i,j;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}