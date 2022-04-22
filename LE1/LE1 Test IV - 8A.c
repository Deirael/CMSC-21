#include <stdio.h>

int main(){

    int a,b; // specifying variables as integers

    a = 2; // assigning variables into values
    b = 3;

    if ( b == 3 && a == 2 ) {  //condition for the if statement
        printf( "*****" ); // print statement if if statement is satisfied
        printf( ">>>>>" );
        printf( "<<<<<" );
    }
    else { //else statement if not satisfied
        printf( "-----" );
    }
}
