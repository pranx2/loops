#include<stdio.h>
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    int i = 1;
    do{
       // scanf("%d",n);
       printf("The number is : %d\n",i);
       i++;
    }while ( i<=n);
return 0;
}