#include <stdio.h>

int main(){
    int a=10,b=5;
    printf("Example values of a and b are %d and %d\n",a,b);
    printf("%d in bits is 1010\n",a);
    printf("%d in bits is 101\n",b);
    printf("\nIn the expression (a & b) | (a ^ b)\n");
    int andBitwise=a&b;
    printf("(a & b) will run. This will give: %d ... in bits 0000\n",andBitwise);

    printf("\nThen\n");
    int XORBitwise=a^b;
    printf("(a ^ b) will run. This will give: %d ... in bits 1111\n",XORBitwise);

    printf("\nFinally\n");
    int ORBitwise=andBitwise | XORBitwise;
    printf("(a & b) | (a ^ b) will run. This will give: %d ... in bits 1111\n",ORBitwise);
    return 0;
}