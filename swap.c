#include <stdio.h>

int main()
{
    int a=10,b=20;
    printf("Initial values of a = %d, b = %d\n",a,b);
    a+=b;
    b= a-b;
    a=a-b;
    printf("\nValues of a and b after swapping\n\t a = %d, b = %d\n",a,b);

    return 0;
}
