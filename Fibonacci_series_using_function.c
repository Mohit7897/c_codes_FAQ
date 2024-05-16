// fibonacci series using function 
#include <stdio.h>

void fibonacci(int num)
{
    int f1=0,f2=1,nexterm=0;
    for(int i=0;i<num;i++)
    {
        if(i == 0)
        {
            printf("%d ",f1);
        }
        if(i == 1)
        {
            printf("%d " , f2);
        }
    if(i >=2)
    {
        nexterm = f1 + f2;
        printf("%d ",nexterm);
        f1=f2;
        f2=nexterm;
    }
    }
}

int main() {
    
    int num=10;

    fibonacci(num);
    
    return 0;
}