#include <stdio.h>
#include <string.h>
#include <ctype.h>

float getSizePrice(char size);

int main(){
    int section,numberOfCoffees,regularCoffee=600,CappuccinoCoffee=850,latteCoffee=700,comboSelection,type;
    float bill;
    char size;
    printf("** Welcome to AL-YASIR restaurent **\n1.Coffee Shop\n2.Burger Hub\n3.Ice Cream Parlour\nChose: ");
    scanf("%d",&section);
    switch (section)
    {
    case 1:
        printf("\nSize of coffe, (s=Small, m=Medium, l=Large): ");
        scanf(" %c",&size);
        if(tolower(size)!='s' && tolower(size)!='m' && tolower(size)!='l'){
            printf("Please enter valid size type");
            return 0;
        }

        printf("\nHow many coffees you want? ");
        scanf("%d",&numberOfCoffees);
        if(numberOfCoffees>1){
            printf("\nCheck out our combo coffee offers:\n1. 2 AY-Cafe (Cappuccino or Latte for 600)\n%s%s",
            "\n2. Buy 2 Small Coffees -> Get 10% off total price\nRegular: 2 x Rs. 200 = Rs. 400\nWith combo: Rs. 360\n",
            "\n0. If you are not selecting any combo coffee offers\nChose: ");
            scanf("%d",&comboSelection);

            switch (comboSelection)
            {
            case 1:
                printf("\nYou have selected combo coffee offer 1, \n\tYou bill is 600.");
                return 0;
                break;
            case 2:
                 printf("\nYou have selected combo coffee offer 1, \n\tYou bill is 360.");
                 return 0;
                break;
            case 0:
              break;
            
            default:
               printf("Please select a valid combo offer from above.");
               return 0;
                break;
            }
        }
        printf("\nEnter Coffe type:\n1. Regular\n2. Cappuccino\n3. Latte\nChose: ");
        scanf("%d",&type);
        switch (type)
        {
            case 1:
                bill=(getSizePrice(tolower(size)))*regularCoffee*numberOfCoffees;
                printf("\nYour final bill is: %.2f",bill);
                break;
            case 2:
                bill=(getSizePrice(tolower(size)))*CappuccinoCoffee*numberOfCoffees;
                printf("\nYour final bill is: %.2f",bill);
                break;
            case 3:
                bill=(getSizePrice(tolower(size)))*latteCoffee*numberOfCoffees;
                printf("\nYour final bill is: %.2f",bill);
                break;
                
            default:
                printf("Please select a valid coffe typer from above.");
                return 0;
                break;
                }
                break;
        break;
    case 2:
        printf("Your order will be handled by Burger Hub section.");
        break;
    case 3:
        printf("Your order will be handled by Ice Cream Parlour section.");
        break;
    
    default:
        printf("Please select a valid selection from above.");
        return 0;
        break;
    }
    return 0;
}
float getSizePrice(char size){
    switch (size)
    {
    case 's':
        return 0.5;
    case 'm':
        return 0.833;
    case 'l':
        return 1;
    }
}