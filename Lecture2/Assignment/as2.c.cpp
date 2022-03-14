#include <stdio.h>

int main()
{
    int number, answer = 0;

    printf("Enter a 3-digit number: ");
    scanf("%d",&number);

    while(number > 0)
    {
        int lastnum = number % 10;

        answer = answer * 10 + lastnum;

        number = number / 10;
    }

    printf("The reversed number is %d\n", answer);

    return 0;
}
