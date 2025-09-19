#include <stdio.h>
int main(){
    char Char[3]={0,0,0,};
    char vowels[5]={'a','e','i','o','u'};
    int vowelNumbers=0;
    int consanantNumbers=0;
    for (int i=0;i<3;i++){
        printf("Insert character %d: ",i+1);
        scanf(" %c",&Char[i]);
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<5;j++){
        if(Char[i]==vowels[j]){
            vowelNumbers++;
            break;
        }else{
            consanantNumbers++;
            break;
        }
        }
    }
    
    printf("Vowels are: %d and consanant are: %d",vowelNumbers,consanantNumbers);
    return 0;
}