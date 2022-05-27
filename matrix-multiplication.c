
/*THIS IS A MATRIX MULTIPLICATION PROGRAM IT WILL ONLY WORK IF THE ROW'S AND COLUMNS'S ARE EQUAL*/#include<stdio.h>

int main(){
    int a[10][10],b[10][10],c[10][10],m,n,p,q,i,j,k;
    printf("Enter number of Row's and Column's to be allorted in matrix A: ");
    scanf("%d%d",&m,&n);
    printf("Enter number of Row's and Column's to be allorted in matrix B:");
    scanf("%d%d",&p,&q);
    if(n==p  &&  m==q){
        printf("Enter elements in matrix A:\n");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter elements in matrix B:\n");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<m;i++){
            for(j=0;j<q;j++){
                c[i][j]=0;
                for(k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][j]*b[k][j];
            }
        }
        printf("Multiplication of Matrix A and B:\n");
        for(i=0;i<m;i++){
            for(j=0;j<q;j++)
            printf("%4d",c[i][j]);
            printf("\n");
        }
    }
    else
    printf("Matrix Multiplication is Not Possible  \n");
    printf("Try Entering Equal Row's and Coloum's in Matrix A and B ");
    return 0;
}