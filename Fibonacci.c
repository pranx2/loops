#include<stdio.h>
//Fibonacci series with loop;
int main(int argc, char const *argv[])
{
        int n = 6 ; 
        int n1=0;
        int n2=1;
        int sum ;
        
        for (int i = 0 ; i <= n ; i++)
        {
            printf("The fibonacci number is : %d\n",n1);
              
      sum = n1 + n2;
      n1=n2;
      n2=sum;
        //int sum = sum + i ;
      
      }
        
        return 0;
}
