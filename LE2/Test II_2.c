a.
int isPalindrome(char *string){

    int length;
    char *forward, *reverse;

    length = strlen(string);
    forward = string;
    reverse = forward + length - 1;

    for (forward = string; reverse >= forward;){
        if (*reverse == *forward){
            reverse--;
            forward++;
        } else
        break;
    } if (forward > reverse)
        return 1;
    else
        return 0;
}

b.
int computeAverage(){
    int n, i;
    float num[20], sum = 0.0, average;

    printf("Emter the number of elements: ");
    scanf ("%d", &n);

    for (i = 0; i < n; ++i){
        printf("%d. Enter number: ", i + 1);
        scanf("%f", &num[i]);
        sum += num [i];
    }

    average = sum /n;
    printf("Average = %.2f", average);
    return 0;
}

c.
void reverseSentence(){
    char c;
    scanf("%c", &c);
    if (c != '\n'){
        reverseSentence();
    }
}

d.
int squareRoot()
{
    int x;
    double ans;
    printf("Enter any number to get the square root: ");
    scanf(" %d", &x);
    ans = sqrt (x);
    printf(" \n The square root of %d is: %.2lf", x, ans);

    return 0;
}
