#include<stdio.h>
int main (){
    int j,p;
    printf("Enter the first year : ");
    scanf("%d",&j);
    printf("Enter the last year : ");
    scanf("%d",&p);
    printf("The Total leap year year is : ");
    for(int i  = j ; i <= p ; i++ ){
        if((i % 4 == 0 ) || ((i % 400 == 0 ) && (i % 100 !=0)))
        {
            printf("%d\n",i);
        }
    }
return 0 ;
}