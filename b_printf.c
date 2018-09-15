#include "b_printf.h"

int         parse(const char *format, va_list arg_list)
{

}

int         b_printf(const char *format, ...)
{
    va_list     arg_list;
    int         printed_characters;

    va_start(arg_list, format);
    printed_characters = parse(format, arg_list);
    return (printed_characters);
}
