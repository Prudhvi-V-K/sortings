#include<stdio.h>
void Insertionsort(int[] ,int);
void main(){
int n,i,a[20];
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}
Insertionsort(a,n);
for(i=0;i<n;i++)
printf("%d",a[i]);
}

void Insertionsort(int a[],int n){
    int i,j,index;
    for(i=1;i<n;i++){
index=a[i];
j=i;
while((j>0)&&(a[j-1]>index)){
    a[j]=a[j-1];
    j--;
}
a[j]=index;

    }
}