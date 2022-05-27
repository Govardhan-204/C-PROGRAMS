#include<stdio.h>
int main(){
    int n,a[10],i,j,t;
    printf("Enter array size : ");
    scanf("%d",&n);
    printf("Enter array values : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    if(a[i]>a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }
    printf("Sorting values are : ");
    for(i=0;i<n;i++)
    printf("\t%d\t",a[i]);
}