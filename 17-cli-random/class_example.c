#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
#include <time.h>

bool valid_number(const char *string) {
    size_t length = strlen(string);
    for (size_t i = 0; i < length; ++i) {
        if (!isdigit(string[i])) {
            return false;
        }
    }
    return true;
}

int main(int argc, char *argv[]) {
    // Seed only ONCE
    srand(time(NULL));

    if (argc == 2 && valid_number(argv[1])) {
        int roll = rand() % atoi(argv[1]) + 1;
        printf("Dice Roll: %i\n", roll);
    }
    else {
        printf("%s: Bad arguments\n", argv[0]);
        return 1;
    }

    return 0;
}
