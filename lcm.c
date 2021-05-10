#include <stdio.h>
 
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}
int main()
{
    int a,b ;
    printf("Input first number: ");
    scanf("%d",&a);
    
    printf("\nInput second number: ");
    scanf("%d",&b);
    
    printf("\nLCM of %d and %d = %d ", a, b, lcm(a, b));
    return 0;
}
