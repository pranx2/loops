#include<stdio.h>
int main (){
    int n;
    printf("input the number : ");
    scanf("%d",&n);

    int sum=0;
    for(int i = 1, j=1 ; i<=n , n>=j   ; i++, j++)
    {
        sum=sum + i ;
        printf("The number is :%d\n",j);
    }
printf("The natural number is : %d",sum);
return 0;
}
