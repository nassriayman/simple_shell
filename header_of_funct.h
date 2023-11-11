#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#ifndef SHELL_H
#define SHELL_H

extern char **environ; /*global variable environ*/

#define DELIMTR " \t\n"  /*delimetre*/


/*str functions*/
int _measure_extent(char *t);
int _contrast_phrases(char *phrase1, char *phrase2);
char *_replicate_target(char *target, char *origin);
char *_join_target(char *target, char *origin);
char *_duplicate_phrase(const char *phrase);

/*main funcs*/
void swap_phrase(char *str, int extent);
char **tokeniser(char *line);
void array_freedom(char **array);
char *_num_to_text(int num);
char *_retrieve_route(char *order);
char *red_row(void);
int _run(char **order, char **params, int index);
void print_mistake(char *name, char *order, int index);
char *_retrieve_setting(char *value);

int is_builtin(char *order);
void build_in(char **order, char **params, int *status, int index);
void close_shell(char **order, int *status);
void print_ev(char **order, int *status);

