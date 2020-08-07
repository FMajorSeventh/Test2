#include <stdio.h>
int main(void)
{
    printf("**short program to print a list of numbers from one to ten**\n");
    for(int i=1;i<=10;i++){
        if(i!=10)   
            printf("%d,",i);
        else    
            printf(" and %d.\n",i);
    }
    printf("program complete\n");
    return 0;
}
