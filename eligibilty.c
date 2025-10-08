/*
NAME: OKOTH LENOX OTIENO
REG NO: PA106/G/28809/25
DESCRIPTION:CHECKING WHETHER THE STUDENT IS ELIGIBLE FOR FINAL EXAM "*/
#include<stdio.h>// preprocessor directives

int main(){//main functions
   int attendance, average;// FDeclaring the variable
   printf("Enter student attendance in percentage: ");
   scanf("%d", &attendance);

   printf("Enter student average marks: ");
   scanf("%d",&average);

   if(attendance>= 75 && average>=40){//showing if the student is above the average and attendance
    printf(" The student is eligible for final exam\n");
   }else{
   printf("not eligible for final exams.");
   }

return 0;
}
