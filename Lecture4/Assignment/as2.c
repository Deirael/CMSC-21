#include <stdio.h>

int main(){
    int i;
    i = 0;

    printf("While loop:\n\n");
    while (i < 10){
        printf("value of i = %d\n", i);
        i++;
    }

    printf("\nFor loop:\n\n");
    for (i = 0; i < 10; i++){
        printf("value of i = %d\n", i);
    }

    do{
        i++;
    } while (i < 10);
    printf("\nDo...while loop:\n\n");
    printf("value of i = %d\n", i);

    return 0;
}
