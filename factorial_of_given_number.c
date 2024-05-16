// factorial of a given number 
#include<stdio.h>
int factorial(int num)
{
    int i=0,fact=1;
    for(i=num;i>0;i--)
    {
        fact=fact*i;
    }
    return fact;
}
int main()
{
    int num=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d ",factorial(num));
    
    return 0;
}