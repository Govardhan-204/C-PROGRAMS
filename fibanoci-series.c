#include<stdio.h>
int main(){
    int n,f1=0,f2=1,f3,i;
    printf("Enter number of series you want:");
    scanf("%d",&n);
    printf("fibanoci series are:  ");
    for(i=0;i<n;i++)
    {
        f3=f1+f2;
        printf("\t%d\t",f3);
        f1=f2;
        f2=f3;
    }
}

