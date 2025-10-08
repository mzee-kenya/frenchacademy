
//write a c program that asks  a user to enter the integer n, then and then prints the sum of all even numbers from 1 to n using a loop
#include<stdio.h>

int main(){
    int n,m,sum=0;
    printf("Enter the integer n: ");
    scanf("%d", &n);

    for (m=1;m<=n;m++){

    if(m%2>0){
            sum+=m;}}{

    printf("the sum of even number is %d",sum);}


    return 0;
}
