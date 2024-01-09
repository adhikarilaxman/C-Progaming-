#include <stdio.h>
int main(){
    int number;
    printf("Enter a positve number:");
    scanf("%d",&number);
    while (number<1000 || number>9999){
        printf("The number is not a four digit number");
        scanf("%d",&number);

    }
    printf("The number %d is a four digit number",number);

    return 0;

    
    
}