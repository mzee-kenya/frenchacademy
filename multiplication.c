#include<stdio.h>

int main(){
    int m, n , p;

    printf("Enter a number: ");
    scanf("%d",&n);
    for (m=1;m<=12; m++){
        p=m*n;
      if (p%2==0){
        printf(" %d × %d= %d ⭐\n",n,m,p);
      }else{
      printf("%d × %d= %d ▶️\n",n,m,p);
      }
    }


return 0;
}
