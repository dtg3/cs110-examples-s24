/*
    Declaring and Initializing a Multidimensional Array

    The syntax (the way we write the code) is very similar
    to using a one dimensional arrays, but we have some special
    syntax and rules to keep in mind in order to use them.
*/
    
#include <stdio.h>

int main() {
    /*
        Declaring a multidimensional array
        2d (3 "rows" and 2 "columns"). Remember
        that all of the values in the 2d array are
        unknown (undefined).
    */
    float two_d_array[3][2];
    
    // Assigning values to a multidimensional array
    two_d_array[0][0] = 1.0;
    two_d_array[0][1] = 3.5;
    two_d_array[2][0] = 3.5;

    // Accessing values from a multidimensional array
    printf("Value at position[0][1]: %f\n", two_d_array[0][1]);

    /*
        We are not limited to two dimensional arrays, but we won't be using any
        arrays with more than two dimensions. This is just cool to know. :)
    */
    int three_d_array[2][3][4];

    // We can also use the initilization lists with out 2d arrays
    int init_all_positions[2][3] = {  
        {0, 1, 2},   /* init row indexed by 0 */
        {3, 4, 5}   /* init row indexed by 1 */
    };

    /*
        This is an equivalent initilization list statement:
            int init_all_positions[2][3] = {0,1,2,3,4,5};

        However, you CANNOT have the array without any dimensionality
        information:

            int no_size_info[][] = {  
                {0, 1, 2},
                {3, 4, 5}
            };
        
        You would need to supply the col portion of a 2d array
        dimension to have a vaild initilization list:

            int col_size_info[][3] = {  
                {0, 1, 2},
                {3, 4, 5}
            };
    */

    // Accessing all positions
    printf("\n2D Array Contents:\n");
    for (int row = 0; row < 2; ++row) {
        for (int col = 0; col < 3; ++col) {
            printf("%i ", init_all_positions[row][col]);
        }
        printf("\n");
    }

    // Just with arrays with one dimension we can have extra
    //  positions initilized to 0 if we only provide some of the
    //  values.
    int extra_positions[3][4] = {  
        {0, 1, 2},   /* init row indexed by 0 */
        {3, 4, 5}    /* init row indexed by 1 */
                     /* the rest will be 0 */
    };

    printf("\nInit with extra indices:\n");
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 4; ++col) {
            printf("%i ", extra_positions[row][col]);
        }
        printf("\n");
    }

    // Initializing specific index with values and the rest will be zero
    int identity_matrix [3][3] = {  
        [0][0] = 1,
        [1][1] = 1,
        [2][2] = 1
    };
    
    printf("\n3x3 Identity Matrix:\n");
    for (int row = 0; row < 3; ++row) {
        for (int col = 0; col < 3; ++col) {
            printf("%i ", identity_matrix[row][col]);
        }
        printf("\n");
    }

    return 0;
}