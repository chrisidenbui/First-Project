#include <stdio.h>
//The Modulus Function
int modulus (int a){
    //Calling the local variable
    int i = 1 ;
    int mul_ten = 10;
    //Finding the number of digit
    while (a / mul_ten >= 10 ) {
        mul_ten = mul_ten * 10;
        i++;
    }
    //Calculating the first digit
    int sum = a / mul_ten;
    //Calculating the rest of the digit based on the number of the digits
    for ( int n = 0; n <= i - 1 ; n++) {
        sum = sum + (a % mul_ten ) / (mul_ten/10);
        mul_ten = mul_ten / 10;
    }

    return sum; //Return the sum
}

int main(int argc, char const *argv[]) {
    int input;
    printf("Input a number here : ");
    scanf("%i", &input );


    int i = modulus(input);
    printf("The sum is : %i\n",i );
    return 0;
}
