#include<stdio.h>
int main(){
      

      int n,i,prime=0;
      printf("Enter a number:");
      scanf("%d",&n);
      for(i=2; i<n;i++){
        if(n%i==0){
            prime=1;
            break;

        }

      }

      if(prime==0){
        printf("its a prime number");
      }else{
        printf("its a not a prime number");
      }

        return 0;

}


