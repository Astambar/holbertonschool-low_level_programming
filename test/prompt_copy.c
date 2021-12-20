#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char *prompt (void)
{
   char *invite = NULL;
   char const *user = getenv("USERNAME");

   if (user == NULL)
   {
      user = getenv("USER");

      if (user == NULL)
      {
         user = "";
      }

   }

   {
      char const *host = getenv("HOSTNAME");

      if (host == NULL)
      {
         host = "";
      }

      {
         char const *aux = getenv("PWD");

         if (aux == NULL)
         {
            aux = "";
         }
         {
            char const *rep = aux + strlen(aux);

            while (rep >= aux && *rep != '/')
            {
               rep--;
            }

            rep++;

            invite = malloc(strlen(user) + strlen(host) + strlen(rep) + 6);

            if (invite != NULL)
            {
               strcat(invite, "$");
               strcat(invite, " ");
            }

         }

      }
   }
   return invite;
}

int main (void)
{
   int end = 0;

   while (!end)
   {
      char *s = prompt();

      if (s != NULL)
      {
         printf ("%s", s);
         fflush (stdout);
         free (s), s = NULL;
      }

      {
         char line[128];
         fgets(line, sizeof line, stdin);
         end = strcmp(line, "quit\n") == 0;
      }

   }
   return 0;
}
