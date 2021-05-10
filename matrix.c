#include<stdio.h>
int main()
{
    int arr[3][3];
    printf("Input elements of he martrix : ");
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("\nelement - [%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    int *ptr = &arr;

    printf("\nThe matrix is : \n");
    for(int i=0;i<3;i++){
            for(int j=0;j<3;j++)
            printf("%d ",*((ptr+i*3)+j)); 
            
            printf("\n");
    }
}
