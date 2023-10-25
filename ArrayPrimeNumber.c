#include <stdio.h>
#include <conio.h>

int main() {
    int ar[100], i, n, j, flag=0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\nNow enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &ar[i]);
    }

   printf("\nAll the prime numbers in the array are:");
    for (i = 0; i < n; i++) {
        for (j = 2; j*j<= ar[i]; j++) {
            if (ar[i] % j == 0) {
                flag = 1;
                break;
            }
        }
        if (ar[i]>1 && flag == 0) { 
            printf(" %d", ar[i]); 
        }
    }

  return 0; 
}
