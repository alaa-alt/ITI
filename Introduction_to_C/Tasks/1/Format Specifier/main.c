#include <stdio.h>
#include <stdlib.h>

int main()
{   char character = 'A';
    printf("Character is %c", character);

    signed int number= -5;
    printf("\nSigned number is %d", number);
    printf("\nSigned number using %%i is %i", number);

    float float_number = 3.87;
    printf("\nScientific notation of float number is %e", float_number);

    printf("\nFloat number is %f", float_number);

    printf("\nFloat number with current precision is %g", float_number);

    long int long_number = 6;
    printf("\nLong number is %ld", long_number);

    double double_number = 7;
    printf("\nDouble number is %lf", double_number);

    long double long_double_number=3.1415926535897932384626433832795029;
    printf("\nLong double number is %Lf", long_double_number);

    unsigned int unsigned_number = 5;
    printf("\nSigned number is %lu", unsigned_number);

    long long long_long_number = 8;
    printf("\nLong Long number is %lli", long_long_number);

    unsigned long long unsigned_long_long = 9;
    printf("\nUnsigned long long is %llu", unsigned_long_long);

    int octal = 100;
    printf("\nOctal representation of %d is %o", octal, octal);
    printf("\nPointer of number 10 is %p",octal );
    printf("\nThe hexadecimal of %d is %x", octal, octal);
    printf("%n");
    char first_string[]="This is my first string";
    printf("\n%s", first_string);


    return 0;
}
