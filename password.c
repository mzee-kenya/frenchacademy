/*
NAME: OKOTH LENOX OTIENO
REG NO: PA106/G/28809/25
DESCRIPTION:
a password sysytem requires to enter the correct passsword "1234" to log in. using a do while loop, write aprogrammthat keeps prompting the user for the password until the correct one is entered,. once correct , display"access granted
*/
#include<stdio.h>

    int main()
    {   int password;
        do{
            printf("enter the password: ");//prompting the user to enter the password
            scanf("%d",&password);
        }while(password!=1234);//keep prompting the user until the correct one is entered
        printf("access granted\n");//displaying access granted
        return 0;
    }