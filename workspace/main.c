#include <stdio.h>
#include <math.h>
#include <stdlib.h>

static int got_intr = 0;
#define DO_FREE(x)	if (x) { FREE(x); x = 0; }

void
done(int k)
{
  
}

static void onintr(int sig)
{
    got_intr = 1;
    done(EXIT_FAILURE);
}


static void set_signal(void)
{
  if (signal(SIGINT, SIG_IGN) != SIG_IGN)
    signal(SIGINT, onintr);

  if (signal(SIGTERM, SIG_IGN) != SIG_IGN)
    signal(SIGTERM, onintr);

  if (signal(SIGHUP, SIG_IGN) != SIG_IGN)
    signal(SIGHUP, onintr);
}

static void create_file_names()
{
  
}

static void open_files()
{
  create_file_names();
}

int main(int argc,char **argv)
{
  int SRexpect;
  int RRexpect;
  int exit_code;

  SRexpect = -1;
  RRexpect = -1;
  exit_code = EXIT_SUCCESS;

  set_signal();

  open_files();
  
  
  return 0;
}
