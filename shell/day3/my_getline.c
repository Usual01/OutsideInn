#include "header.h"
char* my_getline(){
	char* buf = NULL;
	size_t n =0;
	
	getline(&buf, &n, stdin);
	return buf;
}
