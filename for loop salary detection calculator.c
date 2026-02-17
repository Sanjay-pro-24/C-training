#include<stdio.h>
int main(){
    int salary,leave_days,F_salary;
    scanf("%d\n%d",&salary,&leave_days);
    F_salary=salary-(leave_days*100);
    printf("%d",F_salary);
    return 0;
    
}