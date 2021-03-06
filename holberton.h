#ifndef _HOLBERTON_H
#define _HOLBERTON_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <signal.h>
#include <stdarg.h>
#define USER "$ "

/** prompt */
int prompt(char *argv[], char *env[]);
/** function that saves commands in an array*/
char **save_commands(char *buffer);
/**validation and execute commands**/
int val_execute_command(char **commands, char *buffer, char **env);
/** free double pointer */
void free_commands(char **commands);
/* exit prompt */
void exit_free(char *buffer, char **commands, int error);
/**         */
int exit_free_child(char *buffer, char **commands);
/* show environment */
void show_env(char **commands, char *bufer, char **env);
/* clear screen */
void _clear(char *buffer, char **commands);
/* send signal */
void ctrlc__handler(int sig);
/* commands not found */
void c_not_found(char **commands, char *buffer, char **argv, int num_command);
/* end of file */
void end_of_file(char *buffer, int exit_stat);
/* free all */
void free_all(char *buffer, char **commands);
/* void point */
void void_point(char *buffer, char **commands);
/* fork fail */
void fork_fail(char *buffer, char **commands);
/* exit arguments */
int exit_arg(char **commands);

/** FUNCTIONS AUXILIAR */
/* copies a string.*/
int _strcmp(char *s1, char *s2);
/* copies n characteres of string */
char *_strncpy(char *dest, char *src, int n);
/* length of a string */
int _strlen(char *s);
/* convert a string to an integer */
int _atoi(char *s);
/* function that converts a number to string */
char *own_itoa(int num_command);

/**FUNCTIONS ENVIRONMENT */
int concat_commands(char **commands, char *buffer, char **env);
char **get_path_dir(char **commands, char **env);
char *get_path_str(char **env);

#endif
