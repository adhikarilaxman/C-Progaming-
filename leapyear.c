#include <stdio.h>
int main(){
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if (year%400 == 0){
        printf("Leap Year",year);
    }
    else if (year%100 == 0){
        printf("Not a leap year",year);

    }
    else if(year%4 == 0 ){
        printf("Leap year",year);
    }
    else{
        printf("not a leap year",year);
    }

    return 0;
}
