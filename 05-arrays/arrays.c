#include <stdio.h>

int main() {
    int even_integers[10];

    for (int i = 0; i < 10; ++i) {
        even_integers[i] = i * 2;
    }

    printf("The elements of even_integers are:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%i\n", even_integers[i]);
    }

    int array_sum = 0;

    for (int i = 0; i < 10; ++i) {
        array_sum += even_integers[i];
    }

    printf("The sum of the first 10 even integers starting at 0 is %i\n",
           array_sum);
    
    // Creates array of size 3 containing values 1, 2, 3
    int initialized_array[] = {1, 2, 3};

    // Creates array of size 10 where first three elements are 1,2,3
    //  and the remaning 7 elements are 0.
    int another_initialized[10] = {1, 2, 3};

    // This declares and initializes an array of 10 zeros
    int zero_array[10] = {0};

    // Can use a variable for the size of an array, but you then cannot use an
    //  initializer in this case
    int size = 100;
    int array_with_one_hundred_elements[size];

    int array_of_three[3];
    printf("Enter 3 integers to store in an array: ");

    for (int i = 0; i < 3; ++i) {
        scanf("%i", &array_of_three[i]);
    }

    printf("Here are the contents of the array:\n");

    for (int i = 0; i < 3; ++i) {
        printf("%i\n", array_of_three[i]);
    }

    // WEIRD SYNTAX INCOMING!! :)
    // What if we want to initialize specific indices in the array only?
    
    // const means the variable's value is constant and cannot be 
    //  changed. We will use ALL CAPITALS to represent a constant
    //  when declared as a variable. We tend to use these (or
    //  macros more on that later...) to prevent "magic numbers".
    //  Our examples will violate this from time to time, but magic
    //  numbers should have a "name" so they can be easily changed or
    //  referenced.
    const int ARRAY_SIZE = 10;
    
    //int init_indicies[ARRAY_SIZE] = {[0] = 10, [4] = 50, [9] = 100};
    /* 
        WARNING!!! Support for use of an initialization list with an array that utilizes
        a constant as its size is COMPILER SPECIFIC! The Clang compiler (default for macOS)
        will allow this to happen (on Linux this will trigger a warning, but still compile).
        The GCC compiler (the default installed to your Ubuntu WSL on Windows) does not support
        this feature. The above line is commented out to avoid compilation issues across our 
        different development environments. We will look at an workaround for this later in the couse.
        While most of the time, using these two different compilers will not create issues for us, this
        is an instance where their behaviors differ.
    */
    
    // This will set the index positions 0, 4, and 9 to the values
    //  10, 50, and 100 respectively. The rest of the positions will store zero.
    int init_indicies[10] = {[0] = 10, [4] = 50, [9] = 100};

    for (int i = 0; i < ARRAY_SIZE; ++i) {
        printf("%i ", init_indicies[i]);
    }
    printf("\n");

    // We can even use expressions to assign values
    
    int multiplier = 2;
    
    // Still an initialization list, but formatted for readability
    //  This will multiply 2 by 10, 20, and 30 while assigning the results to the
    //  indices 0, 2, 4. Note that I didn't supply a size. The array will sized
    //  to fit the largest index. So the array size will be 5.

    int init_indicies_no_size[] = {
        [0] = 10 * multiplier,
        [2] = 20 * multiplier,
        [4] = 30 * multiplier
    };

    for (int i = 0; i < 5; ++i) {
        printf("%i ", init_indicies_no_size[i]);
    }
    printf("\n");

    return 0;
}