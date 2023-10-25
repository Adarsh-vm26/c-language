#include<stdio.h>
int main(){

    int mark;
    printf("enter your mark:");
    scanf("%d",&mark);
    if(mark<=0 || mark>=101){
        printf("enter a valid number between 50 and 100");
    }else if(mark>=50){
    printf("you are passed");
    }else if(mark<=50){
        printf("you are failed");
 }else{
    printf("dont know");
 }

return 0;
}