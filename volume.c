/*
NAME: OKOTH LENOX OTIENO
REG. NO PA106/G/28809/25
DESCRIPTION:PROMPTING THE USER TO ENTER RADIUS AND HEIGHT
*/
#include<stdio.h>//preprocessor directives
int main(){
    double radius,height;

    //prompting the user to enter the radius
    printf("Enter the radius of the cylinder: ");
    scanf("%lf",&radius);

    //prompting the user to enter height
   printf("Enter the height of the cylinder: ");
   scanf("%lf", &height);

   double pi = 3.14285714286;
  double volume = pi*radius*radius*height ;
  double surface_area = 2*pi*radius*radius+2*pi*radius*height;

  printf("The volume of the cylinder is  %.2lf \n", volume);
  printf("The surface area of of the cylinder is %.4lf ", surface_area);

  return 0;
    }
