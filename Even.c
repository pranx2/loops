#include<stdio.h>
int main (){
    int n;
    printf("Enter the Number : ");
         scanf("%d",&n);
         for (int i=1 ; i<=n ; i++ ){
                 if(i %2 !=0)
                        {continue;}
        printf("The Even number is : %d\n",i);
         }
        return 0;
}