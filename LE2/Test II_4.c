a. int arr[5]=[1,2,3,4,5];
SIZE = 5;

b. int *ptr;

c. *ptr == arr[0]

d.
#include<stdio.h>

int main(){

    int arr[5] = {1,2,3,4,5};
    int *ptr = &arr;

    for(int i=0; i<5; i++)
        printf("%d ",*(ptr+i));

    return 0;
}

e.
#include <stdio.h>
int main() {

    int arr[5] = {1,2,3,4,5};

    for (int i = 0; i < 5; ++i)
        printf("%d\n", *(arr + i));
    return 0;
}
f.
#include<stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5}, i;
    int *ptr = arr;

    f.1 printf("Second element is %d\n", arr[1]);
    f.2 printf("Second element is %d\n", *(arr+1));
    f.3 printf("Second element is %d\n", ptr[1]);
    f.4 printf("Second element is %d\n", *(ptr+1));

    return 0;
}
