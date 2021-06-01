#include "../include/errno.h"
#include "../include/errturn.h"

/* Print current error message, coded by andy tanebaum, edited by Ch4r0nN*/

int perror(s) char *s;
{
  if (errno < 0 || errno > ERRURG) {
	write(2, "Invalid errno\n", 14);
  } else {
	write(2, s, slen(s));
	write(2, ": ", 2);
	write(2, error_message[errno], slen(error_message[errno]));
	write(2, "\n", 1);
  }
}

int slen(s) char *s;
{
  int k = 0;

  while (*s++) k++;
  return(k);
}
