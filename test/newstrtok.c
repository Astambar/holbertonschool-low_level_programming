char *strtok(char *s1, const char *s2)
{
  char *tmp;
 
  if (s1 != NULL)
  {
    if (strcspn(s1, s2) != strlen(s1))
    {
      s1[strcspn(s1, s2)] = '\0';
 
      g_strtok_p = &s1[strcspn(s1, s2) + 1];
    }
    else
      g_strtok_p = NULL;
 
    return s1;
  }
  else
  {
    if (g_strtok_p != NULL)
    {
      tmp = g_strtok_p;
 
      if (strcspn(g_strtok_p, s2) != strlen(g_strtok_p))
      {
        g_strtok_p[strcspn(g_strtok_p, s2)] = '\0';
 
        g_strtok_p = &g_strtok_p[strcspn(g_strtok_p, s2) + 1];
      }
      else
        g_strtok_p = NULL;
 
      return tmp;
    }
    else
      return NULL;
  }
 
  return tmp;
}