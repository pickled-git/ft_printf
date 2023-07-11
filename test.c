#include <stdio.h>
#include "include/ft_printf.h"

int main(void) {

    int norm, ch, str, num, uns, hex, heX, ptr, null;

    int n = 10;
    int *test = &n;

    printf("\n   ---   text, %% and \"   ---   \n");
    norm = ft_printf("%% \" text");
    printf(" = %d\n", norm);
    norm = printf("%% \" text");
    printf(" = %d\n\n", norm);

    printf("   ---   %%c (single character)   ---   \n");
    ch = ft_printf("%c %c", 65, 'B');
    printf(" = %d\n", ch);
    ch = printf("%c %c", 65, 'B');
    printf(" = %d\n\n", ch);

    printf("   ---   %%s (string)   ---   \n");
    str = ft_printf("%s", NULL);
    printf(" = %d\n", str);
    str = printf("%s", NULL);
    printf(" = %d\n\n", str);
    str = ft_printf("%s", "NULL");
    printf(" = %d\n", str);
    str = printf("%s", "NULL");
    printf(" = %d\n\n", str);

    printf("   ---   %%i %%d (integer)   ---   \n");
    num = ft_printf("J'ai %i %d", -32, -2147483648) ;
    printf(" = %d\n", num);
    num = printf("J'ai %i %d", -32, (int)-2147483648);
    printf(" = %d\n\n", num);

    printf("   ---   %%u (unsigned decimal)   ---   \n");
    uns = ft_printf("%u %u", 4294967295U, 0);
    printf(" = %d\n", uns);
    uns = printf("%u %u", 4294967295U, 0);
    printf(" = %d\n\n", uns);
    
    printf("   ---   %%x (hexadecimal (base 16) lowercase)   ---   \n");
    hex = ft_printf("%x %x", 0, 25500);
    printf(" = %d\n", hex);
    hex = printf("%x %x", 0, 25500);
    printf(" = %d\n\n", hex);

    printf("   ---   %%X (hexadecimal (base 16) uppercase)   ---   \n");
    heX = ft_printf("%X gagaga", 4294967295U);
    printf(" = %d\n", heX);
    heX = printf("%X gagaga", 4294967295U);
    printf(" = %d\n\n", heX);

    printf("   ---   %%p (pointer argument)   ---   \n");
    ptr = ft_printf("%p", test);
    printf(" = %d\n", ptr);
    ptr = printf("%p", test);
    printf(" = %d\n\n", ptr);

    null = printf("%p", NULL);
    printf(" = %d\n", null);
    null = ft_printf("%p", NULL);
    printf(" = %d\n", null);   
      
    return 0;
}