#include<stdio.h>
void Radixsort(int[],int);
void main(){
    int n,i,a[10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("UNSORTED LIST\n");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\nRADIX SORT\nSORTED LIST\n");
    Radixsort(a,n);
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void Radixsort(int a[],int n){
    int i,j,k,big,rem,pass,bkt[10][10],bktcount[10];
    big=a[0];
    int div1=1;
    int NOP=0;
    for(i=0;i<n;i++)
    {
        if(big<a[i])
        big=a[i];
    }
    while(big!=0){
        NOP++;
        big=big/10;
    }
    for(pass=1;pass<=NOP;pass++){
        for(i=0;i<10;i++)
        bktcount[i]=0;
        for(i=0;i<n;i++){
            rem=(a[i]/div1)%10;
            bkt[rem][bktcount[rem]]=a[i];
            bktcount[rem]+=1;
        }
        i=0;
        for(k=0;k<10;k++){
            for(j=0;j<bktcount[k];j++){
                a[i]=bkt[k][j];
                i++;
            }
        }
        div1*=10;
        
        }
}
