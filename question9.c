#include <stdio.h>
#include <string.h>
#include <windows.h>
int main(){
    char PIN[5]="0123";
    int balance=5000;
    char userPin[5];
    int withdrawnAmount;
    start:
    system("cls");
    printf("** Welcome to AL-YASIR bank **\n\nPlease Enter The PIN: ");
    scanf("%s",&userPin);
    if(strcmp(PIN,userPin)==0){
        printf("Enter withdrawn amount: ");
        scanf("%d",&withdrawnAmount);
        if(withdrawnAmount<=balance){
            printf("Withdrawn %d was successfull.",withdrawnAmount);
            printf("Your remaining balance is %d",balance-withdrawnAmount);
        }else{
            printf("\nInsufficient balance");
            Sleep(3000);
            goto start;
        }
    }else{
        printf("\n\twrong PIN");
        Sleep(3000);
        goto start;
    }
    return 0;
}