#include<stdio.h>
int main (){

    //GCD-Greatest common divisor or HCF-Highest Common Divisor;
    int Number_1;
    int Number_2;
    printf("Enter the first number : ");
    scanf("%d",&Number_1);
    printf("Enter the first number : ");
    scanf("%d",&Number_2);

    int a= Number_1;
    int b = Number_2;

    while (Number_1 != Number_2)
    {
        if(Number_1 > Number_2)
        {
            Number_1 = Number_1-Number_2 ;
        }
        else
        {
            Number_2 = Number_2-Number_1;
        }
    }
    printf("The GCD number is : %d\n",Number_1);
//LCM-least common multiple;
    int lcm = ((a*b)/Number_1);
    printf("The LCM number is : %d\n",lcm);

    return 0;
}