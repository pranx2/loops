#include<stdio.h>
int main (){
    printf("Enter the numbers : ");
    int n;
    int counter=0;
    scanf("%d",&n);
    int j = n;
    while ( n != 0){
        n = n/10 ;
        counter ++ ;
    }
    printf("There are total %d digits in %d",counter,j);
    return 0 ;
}