#include <stdio.h>
int main(){
    int number=0;
    printf("Enter the number: ");
    scanf("%d",&number);
    printf("%s",number%2==0 ? "Even": number%3==0 ? "Divisible by 3" :"Odd and not divisible by 3");
    return 0;
}