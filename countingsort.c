#include<stdio.h>
void Countingsort(int [],int );
void main(){
    int n,i,a[20];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("UNSORTED LIST\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    printf("\nCOUNTING SORT\nSORTED LIST\n");
    Countingsort(a,n);
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
}
void Countingsort(int a[],int n){
    int output[n+1],max=a[0],i,count[100];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    for(i=0;i<=max;i++)
    count[i]=0;
    for(i=0;i<n;i++)
    count[a[i]]++;
    for(i=1;i<=max;i++){
        count[i]+=count[i-1];
    }
    for(i=n-1;i>=0;i--){
        output[count[a[i]]-1]=a[i];
        count[a[i]]--;
    }
    for(i=0;i<n;i++)
    a[i]=output[i];
}