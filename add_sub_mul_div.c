#include <stdio.h>
int main(){
    int a,b;
    printf("Enter the First No:");
    scanf("%d",&a);
    printf("Enter the Second No:");
    scanf("%d",&b);
    int add=a+b;
    printf("\nAddition result is: %d",add);
    int sub=a-b;
    printf("\nSubtraction result is: %d",sub);
    int mul=a*b;
    printf("\nMultiplication result is: %d",mul);
    int div=a/b;
    printf("\nDivision result is: %d",div);
    
    return 0;
    
}