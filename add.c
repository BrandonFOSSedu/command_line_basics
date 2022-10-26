#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    if(argv[1] != NULL &&  argv[2] != NULL) {
        int num1 = atoi(argv[1]);
        int num2 = atoi(argv[2]);
        printf("sum = %i\n", num1 + num2);
    }
    else
        printf("You need to enter 2 numbers\n");
    return 0;
}
