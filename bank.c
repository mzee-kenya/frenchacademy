/*
NAME: OKOTH LENOX OTIENO
REG NO: PS106/G/28809/25
DESCRIPTION: PROMPTING THE USER TO ENTER AGE AND THE ANNUAL SALARY TO SEE IF ELIGIBLE FOR LOAN

*/
#include<stdio.h> //preprocessor directives
int main (){//main function
    int age , income;// declaring variable

    printf("How old are you?");// prompting the user to enter their age
    scanf("%d", &age);

    printf("Please enter your annual income:");//prompting the user to enter to enter their annual income
    scanf("%d",&income);

    if (age>=21, income >= 21000){
        printf("Congratulation you qualify for a loan.\n");//output if he meet the qualification

    }
    else{
        printf("sorry you are not eligible for the loan");//when he fails to meet the expected requirements

    }
  return 0;

    }
