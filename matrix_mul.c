#include<stdio.h>
void MatrixMultiplication(int matrixA[][50],int rA,int cA,int matrixB[][50],int rB,int cB,int matrixC[][50])
{
    int i,j,k,sum=0;
    if(cA!=rB)
    {
        printf("invalid matrix \n");
        return;
    }
    for(i=0;i<rA;i++)
    {
        for(j=0;j<cB;j++)
        {
            sum=0;
            for(k=0;k<rA;k++)
            {
                sum+=*(*(matrixA+i)+k)**(*(matrixB+k)+j);
            }
            *(*(matrixC+i)+j)=sum;
        }
    }
}
int main()
{
    int i,j;
    int rA,cA,rB,cB;
    int matrixA[50][50],matrixB[50][50],matrixC[50][50];
    printf("enter the no of rows in matrixA:");
    scanf("%d",&rA);
    printf("enter the no of cols in matrixA:");
    scanf("%d",&cA);
    printf("enter matrixA:\n");
    for(i=0;i<rA;i++)
    {
        for(j=0;j<cA;j++)
        {
            scanf("%d",&matrixA[i][j]);
        }
    }

     printf("enter the no of rows in matrixB:");
    scanf("%d",&rB);
    printf("enter the no of cols in matrixA:");
    scanf("%d",&cB);
    printf("enter matrixB:\n");
    for(i=0;i<rB;i++)
    {
        for(j=0;j<cB;j++)
        {
            scanf("%d",&matrixB[i][j]);
        }
    }
    MatrixMultiplication(matrixA,rA,cA,matrixB,rB,cB,matrixC);
    printf("matrix multiplication of matrixA and matrixB:\n");
    for(i=0;i<rA;i++)
    {
        for(j=0;j<cB;j++)
        {
            printf("%d",matrixC[i][j]);
        }
        printf("\n");
    }
}
