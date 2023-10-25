#include<stdio.h>
int main(){

   
    int i,size;
    printf("Enter the number of array to print:\n");
    scanf("%d",&size);
    int num[size];
    printf("Enter the array\n");
    for(i=0;i<size;i++){
        scanf("%d",&num[i]);
    }


printf("ODD number in the array\n");
    for(i=0;i<size;i++){
        if(num[i]%2==1){

            printf("%d\n",num[i]);
        }


    }
    return 0;
}