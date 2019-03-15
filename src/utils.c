#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <time.h>
#include <unistd.h>

#include "utils.h"

int getRandomNumber() {
    return 55;
}

int stringToInt(char* str) {
    int result = 0;

    while (*str) {
        result = result * 10 + (*str) - '0';
        ++str;
    }

    return result;
}