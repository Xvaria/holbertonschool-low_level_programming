#ifndef holbertonH
#define holbertonH

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* 0-read_textfile.c */
ssize_t read_textfile(const char *filename, size_t letters);

/* 1-create_file.c */
int create_file(const char *filename, char *text_content);

/* 2-append_text_to_file.c */
int append_text_to_file(const char *filename, char *text_content);

#endif
