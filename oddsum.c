#include<stdio.h>
int main (){
    int n,sum=0;
    printf("Enter the number :  ");
    scanf("%d",&n);
    for (int i =1 ; i <= n ; i++)
    {  if( i % 2 != 0) // odd numbers - 1,3,5,7,9;
            {
            sum = sum + i;
            }
    }
    printf("%d\n",sum);
    
    return 0;
}