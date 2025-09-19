#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    float percentage;
    char exam,fees;
    printf("What is your attendance percentage: ");
    scanf("%f",&percentage);
    if (percentage>=75.0){
        printf("Have you cleared the midterm exam. (P for Pass, F for Fail): ");
        scanf(" %c",&exam);
        if(tolower(exam)=='p'){
            printf("Have you paid the exam fees. (Y for Yes, N for No): ");
            scanf(" %c",&fees);
            if(tolower(fees)=='y'){
                printf("You are eligible for the Final Exam");
            }else{
                printf("Please clear your dues to appear in the Final Exam.");
            }
        }else{
            printf("You are not eligible");
        }
    }else{
        printf("You are not eligible");
    }
    return 0;
}