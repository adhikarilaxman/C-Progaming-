#include <stdio.h>
int main(){
    int phy,chem,eng,math,comp;
    float sum,avg,percentage;
    printf("Enter the marks obtain in 5 subjects : ");
    scanf("%d%d%d%d%d",&phy,&chem,&eng,&math,&comp);
    sum=(phy+chem+eng+math+comp);
    avg=sum/5;
    percentage=(sum/500)*100;
    printf("Your Grade is : ");
    if(avg>=90){
        printf("A - GRADE");
    }
    else if(avg>=75){
        printf("B - GRADE");
    }
    else if(avg>=60){
        printf("C - GRADE");
    }
    else{
        printf("FAIL");
    printf("Your percentage is %f\n\n",percentage);
    }
    
    return 0;
}