/*
NAME: OKOTH LENOX OTIENO
REG NO: PA106/G/28809/25
DESCRIPTION: A SIMPLE PROGRAM FOR PURCHASING MOBILE DATA BUNDLES
*/
#include<stdio.h>
int main(){
    int options;
    printf("Select data bundles: \n");
    printf("1. 100MB @ 50 KES\n");
    printf("2. 500MB @ 200 KES\n");
    printf("3. 1GB @ 350 KES\n");
    printf("4. 2GB @ 600 KES\n");

    printf("Enter your choice: ");
    scanf("%d", &options);

switch(options){
      case 1:
    printf("You have successfully purchase 100MB @ 50 KES");
    break;
case 2:
    printf("You have successfully purchase 500MB @ 200 KES");
    break;
case 3 :
    printf("You have successfully purchase 1GB @ 350 KES");
    break;
case 4:
    printf("You have successfully purchase 2GB @ 600 KES");
    break;
default:
    printf("Invalid input");}

return 0;
}
