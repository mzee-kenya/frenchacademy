/*
NAME: OKOTH LENOX OTIENO
REG: PA106/G/28809/25
DESCRIPTION:  A program that calcuate bill of water as per the units used
*/
#include<stdio.h>

int main(){
    float units, bill1, bill2,bill3;

    printf("Enter the number of water units consumed: ");
    scanf("%f",&units);

    bill1 =(units*20);
    bill2 =(units*25);
    bill3 =(units*30);

  if(units >= 0&& units<=30){
            printf("Your total bill is KES %.2f",bill1);
    }

  else if( units>30 && units<61){
        printf("your total bill is KES %.2f",bill2);
    }

  else if(units>60 ){
        printf("your total bill is KES %.2f",bill3);
    }
    else{
        printf("invalid input");
    }


return 0;
}
