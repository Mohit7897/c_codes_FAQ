// fibonacci series using recurssion
#include <stdio.h>

int fibonacci_rec(int num)
{
    if(num == 0)
    {
        return 0;
    }
    if(num == 1)
    {
        return 1;
    }
    
    return fibonacci_rec(num-1) + fibonacci_rec(num-2);
}
int main() {
    // Write C code here
    int num=10;
    
    for(int i=0;i<num;i++)
    {
        printf("%d ",fibonacci_rec(i));
    }
    
    return 0;
}