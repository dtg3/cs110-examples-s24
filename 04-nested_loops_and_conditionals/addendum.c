#include <stdio.h>

int main()
{
    /*
        If the array is larger than the initilization
        list, the remaining positions are initialized
        to zero.
    */
    int array_big[10] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 10; ++i) {
        printf("%i ", array_big[i]);
    }
    printf("\n");
    
    /*
        If the array is smaller than the initialization list,
        that is a warning only. It will compile, but this would
        be bad to do as we are using memory that is outside the
        bounds of our array.
    */
    int array_small[2] = {1, 2, 3, 4, 5};

    int a;
    printf("Enter an integer value: ");
    scanf("%i", &a);
    
    /*
        Division/Mod by zero is a compiler warning ONLY
        if the divisor is known to be zero in advance.
        Remember, the compiler run before the program is
        executed, so it doesn't know what values may result
        from other operations like scanf, reading data from
        a file etc. It trusts that you wouldn't do that.
    */
    int div_by_zero = 5 / 0; // Warning
    int mod_by_zero = 5 % 0; // Also a Warning
    
    /*
        if a is 0, the program will run, but program behavior
        is undefined.
    */
    div_by_zero = 5 / a;
    
    /* 
        Here, we check if a is zero first before performing another operation.
        Since the check for "a" being zero is done FIRST, short circuit evaluation
        will ensure that if "a" is zero, the division after the and (&&)
        does not run. When one part of the and (&&) clause is False, there is
        no need to check the second as we can only have a True outcome if both
        sides of the and (&&) are True.
    */
    if (a != 0 && 8 / a <= 2) {
        printf("TRUE!\n");
    }
    else {
        printf("FALSE\n");
    }

    return 0;
}
