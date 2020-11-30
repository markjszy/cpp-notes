#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    printf("This is working\n");

    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("Val is %d\n", *(x + 3));

    return EXIT_SUCCESS;
}