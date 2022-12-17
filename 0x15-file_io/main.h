#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
<<<<<<< HEAD
=======
int append_text_to_file(const char *filename, char *text_content);
int main(int argc, char **argv);
>>>>>>> bd287b4fc4a4095b6709e971465e11376604743c
#endif
