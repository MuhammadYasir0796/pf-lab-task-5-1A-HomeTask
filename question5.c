#include <stdio.h>

int main(){
    int stud1,stud2,stud3;
    printf("Please enter the marks of three students: ");
    scanf("%d%d%d",&stud1,&stud2,&stud3);
    printf("Largest marks is: %d",stud1>stud2?stud1:stud2>stud3?stud2:stud3);
    return 0;
}