#include<stdio.h>
int main(){
     int born_year;
     int age;
     int current_year = 2025;
     printf("which year were you born");
     scanf("%d" ,&born_year);
     age =(current_year-born_year);
     printf("your age is %d years old", age);

     return 0;

     }

