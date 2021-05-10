#include <stdio.h>
int sumOfDigits(int x)
{
    int n,sum=0;
    n=x;
    while(n>0)
    {
        sum+=n%10;
        n=n/10;
    }
    return sum;
    
}
int main() {
    int x;
    printf("Input number: ");
    scanf("%d",&x);
    printf("Sum of digits: %d",sumOfDigits(x));
    
    return 0;
}
