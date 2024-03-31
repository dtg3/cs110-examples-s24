/*
    Example of powers of 2 program using a staticly sized array
*/
#include <stdio.h>
#include <stdlib.h>

void powers_of_2(unsigned int *powers, size_t count);

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <number of powers>\n", argv[0]);
        return 1;
    }

    size_t power_count = atoi(argv[1]);

    unsigned int powers[power_count];

    powers_of_2(powers, power_count);

    for (size_t i = 0; i < power_count; i++) {
        printf("%u\n", powers[i]);
    }

    return 0;
}

void powers_of_2(unsigned int *powers, size_t count) {
    unsigned int power = 1;
    for (size_t i = 0; i < count; i++) {
        powers[i] = power;
        power *= 2;
    }
}
