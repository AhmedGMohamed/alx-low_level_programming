#ifndef MAIN_H
#define MAIN_H
int _putchar(char);
void* malloc_checked(unsigned int);
char *string_nconcat(char *, char *, unsigned int);
void *_calloc(unsigned int, unsigned int);
int *array_range(int, int);
void *_realloc(void *, unsigned int, unsigned int);
int _strlen(char *);
void print_str(char *, int);
int is_valid(char *);
void init_arr(char *, int);
void normalize(char *, int);
char *mul(char *, char *, int, int);
#endif
