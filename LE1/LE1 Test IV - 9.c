#include <stdio.h>

int main(){
    int row, column = 0;
    int size = 0 ;
    char cont = 'y';

    while(cont == y){
        printf("Enter square size:");
        scanf("%d", &size);

    for( row = 0 ;row < size ; row++){
        for(column = 0 ; column < size;column++){
            if (i = 0 || j = 0|| i = size|| j = size){
                printf("*");
        }
        else{
            printf(" ");
        }
    }
    printf("\n");
}

    printf("Print another square? Enter y or n: ");
    scanf (%c, &cont);

    if (cont == 'n'){
        printf(You have exited the program, thank you for using!);
    }
    else if (cont != y && cont != n){
        printf("Not a valid choice. \n");

        printf("Print another square? Enter y/n: ");
        scanf (%c, &cont);
    }
    }
    return 0;
}
