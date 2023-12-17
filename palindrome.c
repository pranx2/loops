#include<stdio.h>
int main () {
    int n,c,sum = 0 , r ;
    printf("Enter the number : ");
    scanf("%d",&n);
    c = n ;
    while( n > 0 )
    {
        r = n % 10;
        sum = r + (sum * 10);
        n= n/10;
    }
    if(c == sum)
    {
        printf("This is a Palindrome Number");
    }
    else printf("This is not a Palindrome Number");
return 0;
}