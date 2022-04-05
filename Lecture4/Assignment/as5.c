#include<stdio.h>

int main(){

    int i,num_of_days;
    int first;

    printf("Enter number of days in a month: ");
    scanf("%d",&num_of_days);

    if (num_of_days <= 27){

        printf("Invalid input.");
    }

    else if (num_of_days >= 32){

        printf("Invalid input.");
    }

    else {

    printf("Enter first day in a month: ");
    scanf("%d",&first);

    for(i = 1; i < first; i++)
       printf("");

    for(i = 1; i <= num_of_days; i++){
       printf("%3d", i);

       if((first + i-1) % 7 == 0)
          printf("\n");
    }
    return 0;
    }
}
