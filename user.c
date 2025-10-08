// prompting to the user to give their height, their ID no and bank balance
/*
NAME: OKOTH LENOX OTIENO
REG NO: PA106/G/28809/25
*/
#include<stdio.h>//preprocessor directives

int main() {
    //Declare variable for storing data from the user
    int height;// height of the user
    int id;// ID number of the user
    int balance;// bank account of the user

    // asking the user fill the details
    printf("FILL IN THE DETAILS BELOW\n");

    //prompting user to give height
    printf("Height: (metres)");
    scanf("%d", &height);

    //prompting user to give number
    printf("YOUR ID NO: ");
    scanf("%d", &id);

     //prompting user to give bank account balance
    printf("YOUR BANK ACCOUNT BALANCE: ");
    scanf("%d",&balance);

    //printing the user's information
    printf("ID no %d , you are %d metres tall \n", id,height);
    printf("YOUR ACCOUNT BALANCE IS %d Thank you for using our services(●'◡'●)", balance);

    return 0;


    }
