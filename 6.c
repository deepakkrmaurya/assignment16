/*6. Write a program in C to find the sum of rows and columns of a Matrix.*/
#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,sum=0;
    printf("inter the matrix");
    for (size_t i = 0; i <3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    for (size_t i = 0; i <3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            
                sum=sum+a[i][j];
        }
        
    }
    printf("sum of digonal=%d",sum);
    return 0;
}