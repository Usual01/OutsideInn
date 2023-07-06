#include "header.h"

void shell() {
    char buffer[BUFFER_SIZE];
    while (1) {
        printf("miracle_says\t");
        char* input = my_getline();
        strcpy(buffer, input);
        free(input);

       
       _fork(buffer);
    }
}

