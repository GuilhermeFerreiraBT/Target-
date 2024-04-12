#include <stdio.h>  /* printf() */


void reverse( char str[] )
{
    char * ptr = str;

    while( ptr && *ptr )
        ptr++;

    for( ptr--; str < ptr; str++, ptr-- )
    {
        *str = *str ^ *ptr;
        *ptr = *str ^ *ptr;
        *str = *str ^ *ptr;
    }
}


int main( void )
{
    char txt[] = "o dia de amanh� n�o brilha";

    reverse( txt );

    printf("%s\n", txt );

    return 0;
}
