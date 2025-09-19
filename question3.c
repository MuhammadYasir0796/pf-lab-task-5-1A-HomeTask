#include <stdio.h>
#include <stdbool.h>

int main(){
    int x=10;
    int y=20;
    int z=15;

    bool answer=x + y * z >10 && x - z < y || !(y % z);
    printf("Answer: %d",answer);
    return 0;
}