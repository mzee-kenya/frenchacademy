/*A bank atm allows widhdrawal as long as acount balance is greateer tan zero
Enter a while loop where the balance become zero or negaive*/
#include<stdio.h>
int main(){
    int balance=1000;
    int amount;
    while (balance>0){
        printf("enter valid amount: \n");
        scanf("%d",&amount);
        if (balance-amount>=0){
            balance=balance-amount;
            printf("Your current balance is %d\n",balance);
        }else{
            printf("insufficient balance\n");
        }continue;
        if (balance<=0){
            printf("your balance is zero or negative\n");
        }
        return 0;
    
    
    }return 0;
}