#include <stdio.h>
int main()
{
    int a,i=1;
    printf("Enter a number\n");
    scanf("%d",&a);
    do{
        printf("%d\n",a*i);
        i = i+1;

    }while(i<11);
    
    return 0;
}
