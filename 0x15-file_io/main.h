#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/*Prototypes*/
int _putchar(char c);
size_t _strlen(char *str);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

void num_arg(int argc);
void exist_file(ssize_t check, char *filename, int op_from, int op_to);
void created_file(ssize_t check, char *filename, int op_from, int op_to);
void closed_file(int check, int op);



#endif /*LISTS*/
