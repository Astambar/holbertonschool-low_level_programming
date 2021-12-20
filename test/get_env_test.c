#include <stdio.h>
#include "main.h"
char *_getenv(const char *name);
int main(void)
{
	/* compare our _getenv, _setenv and _unsetenv to real function */

	printf("\n\n-----VARIABLE NON PRESENTE-----\n");
	printf("_getenv HELLO : %s\n", _getenv("HELLO"));
	printf(" getenv HELLO : %s\n", getenv("HELLO"));

	printf("\n\n-----VARIABLE PRESENTE-----\n");
	printf("_getenv PATH : %s\n", _getenv("PATH"));
	printf(" getenv PATH : %s\n", getenv("PATH"));

	printf("\n\n-----GETENV MINUSCULE-----\n");
	printf("_getenv PAtH : %s\n", _getenv("PAtH"));
	printf(" getenv PAtH : %s\n", getenv("PAtH"));

	printf("\n\n-----GETENV EMPTY-----\n");
	printf("_getenv EMPTY : %s\n", _getenv(""));
	printf(" getenv EMPTY : %s\n", getenv(""));

	printf("\n\n-----GETENV \\0-----\n");
	printf("_getenv \\0 : %s\n", _getenv("\0"));
	printf(" getenv \\0 : %s\n", getenv("\0"));


	printf("\n\n\n\n-----SETENV NEW VARIABLE OVERWRITE = 0-----\n");

	printf("_getenv BONJOUR : %s\n", _getenv("BONJOUR"));
	printf(" getenv RUOJNOB : %s\n", getenv("RUOJNOB"));


	printf("\n\n-----SETENV NEW VARIABLE OVERWRITE = 1-----\n");

	printf("_getenv BONJOUR : %s\n", _getenv("BONJOUR"));
	printf(" getenv RUOJNOB : %s\n", getenv("RUOJNOB"));

	printf("_getenv BONJOUR : %s\n", _getenv("BONJOUR"));
	printf(" getenv RUOJNOB : %s\n", getenv("RUOJNOB"));

	printf("\n\n-----SETENV NEW VARIABLE BONjouR-----\n");

	printf("_getenv BONjouR : %s\n", _getenv("BONjouR"));
	printf(" getenv RuojNOB : %s\n", getenv("RuojNOB"));

	printf("_getenv BONjouR : %s\n", _getenv("BONjouR"));
	printf(" getenv RuojNOB : %s\n", getenv("RuojNOB"));

	printf("\n\n-----SETENV NEW VARIABLE NAME NULL-----\n");

	printf("_getenv NAME NULL : %s\n", _getenv(""));
	printf(" getenv NAME NULL : %s\n", getenv(""));

	printf("_getenv NAME NULL : %s\n", _getenv(""));
	printf(" getenv NAME NULL : %s\n", getenv(""));

	printf("\n\n-----SETENV NEW VARIABLE VALUE NULL-----\n");

	printf("_getenv VALUE NULL : %s\n", _getenv("BONJOUR"));
	printf(" getenv VALUE NULL : %s\n", getenv("RUOJNOB"));

	printf("_getenv VALUE NULL : %s\n", _getenv("BONJOUR"));
	printf(" getenv VALUE NULL : %s\n", getenv("RUOJNOB"));

	printf("\n\n-----SETENV NEW VARIABLE WITH '=' IN NAME-----\n");

	printf("_getenv '=' NAME : %s\n", _getenv("BONJOU=R"));
	printf(" getenv '=' NAME : %s\n", getenv("RUOJNO=B"));

	printf("_getenv '=' NAME : %s\n", _getenv("BONJOU=R"));
	printf(" getenv '=' NAME : %s\n", getenv("RUOJNO=B"));

	printf("\n\n-----SETENV NEW VARIABLE WITH '=' IN VALUE-----\n");

	printf("_getenv '=' VALUE : %s\n", _getenv("BONJOUR"));
	printf(" getenv '=' VALUE : %s\n", getenv("RUOJNOB"));

	printf("_getenv '=' VALUE : %s\n", _getenv("BONJOUR"));
	printf(" getenv '=' VALUE : %s\n", getenv("RUOJNOB"));

	printf("\n\n-----SETENV NEW VARIABLE WITH NUMBER IN NAME-----\n");
	printf("_getenv '=' VALUE : %s\n", _getenv("123"));
	printf(" getenv '=' VALUE : %s\n", getenv("321"));

	printf("_getenv '=' VALUE : %s\n", _getenv("123"));
	printf(" getenv '=' VALUE : %s\n", getenv("321"));

	printf("\n\nDONE\n");
	return(0);
}
/**
 * *_getenv - prints the environment
 * @name: nom de la variable d'environement
 * Return: Fails  => NULL or not Fails => Value Pointer.
 */
char *_getenv(const char *env)
{
int i, j, test;
    extern char **environ;

    for (i = 0; environ[i]; i++)
    {
        for (j = 0; environ[i][j] != '='; j++)
        {
            if (environ[i][j] != env[j])
                break;
        }
        if (environ[i][j] == '=')
            break;
    }
    if (environ[i] == NULL)
        return (NULL);
    for (j = 0; environ[i][j] != '='; j++)
        ;
    j++;
    return((*(environ + i) + j));
}
