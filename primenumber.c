#include<stdio.h>
int main (){
    int n,count=0;
        printf("Enter the number : ");
        scanf("%d",&n);
            for (int i =1 ; i<=n ; i++)
                    {
                        if ( n%i == 0)
                            {
                                count++;
                            }
                    }
                        if ( count == 2)
                            {
                                printf("This is a prime number");
                            }
                            else 
                            {
                                printf("This is not an prime number ");
                            }
    return 0 ;                        
}