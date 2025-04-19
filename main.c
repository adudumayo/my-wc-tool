#include <stdio.h>
#include <stdlib.h>

void byteReturner(char* fileName) {
    FILE* flptr;

    flptr = fopen(fileName, "r");

    if (flptr == NULL) {
        printf("This file does not exist\n");
    } else {
        printf("We Up\n");
    }
} // Has to return the number of bytes in the given file

int main(int argc, char **argv) {

    byteReturner(argv[1]);
}
