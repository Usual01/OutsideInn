#include "header.h"
void _fork(char *buffer){	
	buffer[strcspn(buffer, "\n")] = '\0';	
	if (strlen(buffer) == 0 || strspn(buffer, " \t\n") == strlen(buffer)) {
        	printf("Nothing was entered. Goodbye.\n");
        	exit(EXIT_SUCCESS);
    }
        if (strcmp(buffer, "exit") == 0) {
            printf("Shell exited.\n");
            exit(EXIT_SUCCESS);
        }
	pid_t pid = fork();

	if (pid < 0){
		fprintf(stderr, "fork failed");
	}

	else if(pid == 0){
		execlp(buffer, buffer, NULL);
		fprintf(stderr, "command '%s' not available\n", buffer);
		exit(EXIT_FAILURE);
	}
	else{
		int status;
		waitpid(pid, &status, 0);
	}

}
