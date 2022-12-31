/*4. Write a program in C to find the sum of right diagonals of a matrix.*/
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
            if(i+j==2)
            {

                sum=sum+a[i][j];
            }
        }
        
    }
    printf("sum of digonal=%d",sum);
    return 0;
}