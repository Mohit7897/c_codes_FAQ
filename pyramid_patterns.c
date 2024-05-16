#include<stdio.h>
void right_half_pyramid(int n)
{
    printf("right_half_pyramid\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void left_half_pyramid(int n)
{
     printf("left_half_pyramid\n");
    for(int i=0;i<n;i++)
    {
        for(int j =i;j<=n;j++)
        {
            printf("  ");
        }
        for(int j=0;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
void pyramid(int n)
{
     printf("pyramid\n");
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            printf(" ");
        }
        for(int j=0;j<i;j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
    
}

void hill(int n)
{
    printf("hill\n");
   for(int i=1;i<=n;i++)
   {
    for(int j=i;j<=n;j++)
    {
        printf("  ");
    }
    for(int j=1;j<=i;j++)
    {
        printf("* ");
    }
    for(int j=1;j<=i;j++)
    {
        printf("* ");
    }
    printf("\n");
   }
}
int main()
{
    int rows=0;
    printf("Enter the rows: ");
    scanf("%d",&rows);
    
    right_half_pyramid(rows);
    printf("\n");
    left_half_pyramid(rows);
    printf("\n");
    pyramid(rows);
    printf("\n");
    hill(rows);
    printf("\n");
    return 0;
}