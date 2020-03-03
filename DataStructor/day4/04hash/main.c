#include <stdio.h>
#include <stdlib.h>
#include "hash.h"

int main(int argc, char* argv[])
{
    char* key = "abcdefghijklmnopqrstuvwxyz1234567890";
    printf("General Purpose Hash Function Algorithms Test\n");
    printf("By Arash Partow - 2002 \n" );
    printf("Key: %s\n",key );
    printf(" 1. RS-Hash Function Value: %u\n",RSHash (key,36));
    printf(" 2. JS-Hash Function Value: %u\n",JSHash (key,36));
    printf(" 3. PJW-Hash Function Value: %u\n",PJWHash (key,36));
    printf(" 4. ELF-Hash Function Value: %u\n",ELFHash (key,36));
    printf(" 5. BKDR-Hash Function Value: %u\n",BKDRHash(key,36));

    return 0;
}
