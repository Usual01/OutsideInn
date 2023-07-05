#ifndef HEADER_H
#define HEADER

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

#define BUFFER_SIZE 256

void _fork();
void shell();
#endif
