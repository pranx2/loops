#include<stdio.h>
int main(){
//Explore the ODD numbers->
        int n;
    printf("Enter the number: ");
        scanf("%d",&n);
    for(int i=1; i<=n ; i++ )
            { if ( i % 2 ==0)
                {continue;}
    printf("The ODD number is : %d\n",i);
    }
return 0;
}
