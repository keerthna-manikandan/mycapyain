#include <stdio.h>
int isprime(int n)
{
    int flag=0;
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;break;
        }
    }
    return flag;
    
}
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
    
    int flag = isprime(x);
    if(x==1)
    {
        printf("\n1 is neither prime nor composite");
    }
    else{
        if (flag == 0)
          printf("\n%d is a prime number.", x);
        else
          printf("\n%d is not a prime number.", x);
    }
    return 0;
}
