#include<stdio.h>
//Finding the Factorial number;
int main (){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
        int fact =1;
            for(int i=1; i<=n; i++)
           { fact = fact *i;
    printf("The factorial numbers are:%d\n",i);
    }
    printf("\n\n");
printf("The factorial number is : %d",fact);
return 0;
}
