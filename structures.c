#include <stdio.h>
struct employee{
    char empname[100],deptname[100],phone[10];
    int age,empno;
    float salary;
    
};
int main() {
    struct employee s[20];
    printf("Enter the details of 20 employees");
    for(int i=0;i<20;i++)
    {
        s[i].empno=i+1;
        printf("\n Name: ");
        scanf("%s",s[i].empname);
        printf("\n Department Name: ");
        scanf("%s",s[i].deptname);
        printf("\n Phone number: ");
        scanf("%s",s[i].phone);
        printf("\n Age: ");
        scanf("%d",&s[i].age);
        printf("\n Salary: ");
        scanf("%f",&s[i].salary);
    }
    
    
    printf("\n\nName    Age  Phone Number  Salary");
    for(int i=0;i<30;i++)
    {
        printf("\n%s  %d  %s   %f",s[i].empname,s[i].age,s[i].phone,s[i].salary);
    }
    
    return 0;
}
