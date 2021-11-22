#include <stdio.h>
 
int main ()
{
	int numfiles = 5;
FILE *files[numfiles];
for (int i = 0; i <= numfiles; i++)
{
    char filename[30];
    sprintf(filename, "%d-main.c", i);
	if(!(files[i] = fopen(filename, "r"))){
		files[i] = fopen(filename, "w");
	}
}

return 0;
}
