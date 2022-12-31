/*3. Write a program in C to find the transpose of a given matrix.*/
#include<stdio.h>
int main()
{
    int a[2][2],b[2][2]={1,2,3,4},i,j;
    for (size_t i = 0; i < 2; i++)
    {
        for(j=0;j<2;j++)
        {
            a[i][j]=b[j][i];
        }
    }
    
    for (size_t i = 0; i < 2; i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
   return 0;
}