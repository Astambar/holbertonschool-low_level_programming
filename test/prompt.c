    #include <stdio.h>
    #include <stdlib.h>
    int main ()
    {
		size_t bufsize = 256;
		char buffer[bufsize];
		char *b = buffer;

		printf("$ ");
		getline(&b, &bufsize, stdin);
		printf("%s", buffer);
		return (0);
    }
