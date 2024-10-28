#include "main.h"
#include <stdio.h>

int _isupper(int c)
if (c >= 'A' && c <= 'Z') {
    _putchar('1');
    return (1);
} else {
    _putchar('0');
    return (0);
}
