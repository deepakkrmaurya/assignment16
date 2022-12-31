#include<stdio.h>
int main()
{int sum=0;
    int i,j,a[3][3],b[3][3],c[3][3],k;
    printf("inter thr fiest matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
    printf("intrtr the second matrix\n");
    for (size_t i = 0; i < 3; i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for (size_t i = 0; i < 3; i++)
    {   
        sum=0;
        for (size_t j = 0; j <3; j++)
        
        {
           for(k=0;k<3;k++)
           {
            sum=sum+a[i][k]*b[k][j];
           }
           c[i][j]=sum;
        }
        
    }
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
          printf("%d ",c[i][j]);
            
        }
        printf("\n");
    }
    return 0;
    
}