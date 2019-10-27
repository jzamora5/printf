#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * struct Checkstr - Struct to check format
 *
 * @flag: character associated to flags
 * @flagnot: Flags that are not allowed per specifier
 */
typedef struct Checkstr
{
	char flag;
	char *flagnot;
} checkstr;

/**
 * struct Specs_t - struct to call specifier functions
 *
 * @s: character representing specifier
 * @f: The function associated
 */
typedef struct Specs_t
{
	char s;
	char *(*f)(const char *, int, va_list);
} specs_t;
int _printf(const char *format, ...);
int _strlen(char *s);
int blen(int n, int base);
int check_format(const char *formspec, int j);
char *generate_malloc(const char *s, int len_p, va_list list);
char *gen_d(const char *, int, va_list);
char *gen_i(const char *, int, va_list);
char *gen_o(const char *, int, va_list);

int check_specs(const char *s, int *p);
void _memcpy(char *dest,  const char *src, unsigned int n);

void print_number_str(int n, char *str);



#endif
