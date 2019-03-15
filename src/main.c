#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

#include "utils.h"

int main() {
 
    printf("Hello World!\n");

    int random = getRandomNumber();

    printf("Random Number: %d\n", random);

    exit(EXIT_SUCCESS);
    
}