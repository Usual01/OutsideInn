#include "header.h"
void _fork(){	
	char buffer[BUFFER_SIZE];
	if(fgets(buffer, BUFFER_SIZE, stdin) == NULL){
	printf("nothing was entered, goodbye");
	}

	buffer[strcspn(buffer, "\n")] = '\0';
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
