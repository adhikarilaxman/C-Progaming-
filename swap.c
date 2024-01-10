#include <stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the Number a:");
    scanf("%d",&a);
    printf("Enter the Number b:");
    scanf("%d",&b);

    temp=a;
    a=b;
    b=temp;
    printf("a=%d b=%d",a,b);

    return 0;
    
}