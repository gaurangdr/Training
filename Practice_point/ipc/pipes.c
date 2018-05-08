#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

/* Read characters from the pipe and echo them to stdout. */

void
read_from_pipe (int file)
{
	sleep(5);
  FILE *stream;
  int c;
  stream = fdopen (file, "r");
//	sleep(5);
  while ((c = fgetc (stream)) != EOF) {
//sleep(1);
    putchar (c);
	}
  fclose (stream);
}

/* Write some random text to the pipe. */

void
write_to_pipe (int file)
{
  FILE *stream;
	char c;
  stream = fdopen (file, "w");
  fprintf (stream, "hello, world!\n");
	fprintf (stream, "goodbye, world!\n");
  while ((c = fgetc (stdin)) != EOF)
    fputc(c, stream);
 close (stream);
//	sleep(2);
	printf("writer die\n");
}

int
main (void)
{
  pid_t pid;
  int mypipe[2];

  /* Create the pipe. */
  if (pipe (mypipe))
    {
      fprintf (stderr, "Pipe failed.\n");
      return EXIT_FAILURE;
    }

  /* Create the child process. */
  pid = fork ();
  if (pid == (pid_t) 0)
    {
      /* This is the child process.
         Close other end first. */
      close (mypipe[1]);
      read_from_pipe (mypipe[0]);
      return EXIT_SUCCESS;
    }
  else if (pid < (pid_t) 0)
    {
      /* The fork failed. */
      fprintf (stderr, "Fork failed.\n");
      return EXIT_FAILURE;
    }
  else
    {
      /* This is the parent process.
         Close other end first. */
      close (mypipe[0]);
      write_to_pipe (mypipe[1]);
      return EXIT_SUCCESS;
    }
//	sleep(20);
}
