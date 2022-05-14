#ifndef _MAIN_H_
#define _MAIN_H_

int _putchar(char c);
int _printf(const char *format, ...);
int _print_char(va_list arg);
int _print_str(va_list arg);
int _print_int(va_list arg);
int _print_percent(void);

/*
int print_unsigned(va_list arg);
void print_binary(unsigned int n, unsigned int *printed);
int print_unsignedToBinary(va_list arg);
int print_oct(va_list arg);
int print_unsignedIntToHex(unsigned int num, char _case);
int print_hex_base(va_list arg, char _case);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_STR(va_list arg);
*/

/*
 * struct identifierStruct - structure definition of a printTypeStruct
 * @indentifier: type
 * @printer: function to print
 */
typedef struct identifierStruct
{
    char *indentifier;
    int (*printer)(va_list);
} identifierStruct;

#endif /* _MAIN_H_ */
