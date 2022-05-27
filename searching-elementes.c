#include<stdio.h>
int main(){
    int a[10],n,m,c,d,i;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter elements : ");
    
    for(i=0;i<n;i++)

    scanf("%d",&a[i]); 
    printf("enter search value: ");
    scanf("%d",&m);
    for(i=1;i<n;i++)
    {
        if(m==a[i])
        {
            c=1;
            d=i;
        }
    }
    if(c==1)
    printf("search value found");
    else
    printf("search value not found");
}
