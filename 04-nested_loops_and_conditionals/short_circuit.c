#include <stdio.h>
 
int main()
{
    int x = 50;
    int y = -1;

    /*
      An OR condition is True it at least one clause is also True.
      When x is 50, ++y does not need to be run as it's result is
      irrelevent in the context of the OR condition.

      When X is not 50, the second statement will run incrementing
      y to 0 (which is considered to be "False").
    */
    if (x != 50 || ++y) {
        printf("X != 50\n");
        printf("Value of y: %i\n", y);
    }
    else {
        printf("X == 50\n");
        printf("Value of y: %i\n", y);
    }

    // reset y to -1
    y = -1;
    
    /*
      This concept applies to the AND statement as well, but
      if any portion of the condition is deemed false, the
      entire AND statment will evaluate to FALSE
    */
    if (x != 50 && ++y) {
        printf("X != 50\n");
        printf("Value of y: %i\n", y);
    }
    else {
        printf("X == 50\n");
        printf("Value of y: %i\n", y);
    }

    
    return 0;
}
