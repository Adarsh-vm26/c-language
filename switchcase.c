#include <stdio.h>


int main() {
    int mark;
    
    printf("Enter the mark: ");
    scanf("%d", &mark);

            switch (mark) {
            case 50 ... 100:
                printf(" you are passed\n");
                break;
            default:
                printf("you are Failed\n");
                break;
        }
 

    return 0;
}
