#include<stdio.h>
int main (){
    int n,l,sum,c;
    printf("Enter the numbers : ");
    scanf("%d",&n);
        l=n%10;
    while (n!=0 )
    { 
        c=n;
        n=n/10 ;
    }
    sum = l+c ;
    printf("The first and last digit sum id : %d",sum);
    return 0;
}