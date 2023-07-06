#ifndef HEADER_H

#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFER_SIZE 256

void _fork(char* buffer);
void shell();
char* my_getline();
#endif
