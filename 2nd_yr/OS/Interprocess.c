
	//Develop a C program which demonstrates interprocess communication between a reader process and a 
    //writer process. Use mkfifo, open, read, write and close APIs in your program.

                #reader_process:
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdio.h>
#define MAX_BUF 1024
int main()
{
  int fd;
  /* A temporary FIFO file is not created in reader */
  char *myfifo = "/tmp/myfifo";
  char buf[MAX_BUF];
  /* Open the named pipe for reading */
  fd = open(myfifo, O_RDONLY);
  /* Read data from the FIFO */
  read(fd, buf, MAX_BUF);
  printf("Writer: %s\n", buf);
  /* Close the FIFO */
  close(fd);
  return 0;
}

             #writer process:
#include<stdio.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<string.h>
int main()
{
  int fd;
  char buf[1024];
  /* Create the named pipe (FIFO) */
  char *myfifo = "/tmp/myfifo";
  mkfifo(myfifo, 0666);
  printf("Run Reader process to read the FIFO File\n");
  /* Open the named pipe for writing */
  fd = open(myfifo, O_WRONLY);
  /* Write data to the FIFO */
  strcpy(buf, "Hello from Writer Process");
  write(fd, buf, sizeof(buf));
  /* Close the FIFO */
  close(fd);
  /* Remove the FIFO */
  unlink(myfifo);
  return 0;
}
