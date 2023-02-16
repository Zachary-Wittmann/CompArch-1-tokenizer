#include <stdio.h>

main()
{
  char str[50];

  printf("> ");
  fgets(str, 50, stdin);  /* stdin allows for standard input*/

  printf("%s\n", str);
}
