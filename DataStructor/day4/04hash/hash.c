#include "hash.h"

unsigned int RSHash(const char* str, unsigned int len)
{
    unsigned int b = 378551;
    unsigned int a = 63689;
    unsigned int hash = 0;
    unsigned int i = 0;
    for(i = 0; i < len; str++, i++)
    {
        hash = hash * a + (*str);
        a = a * b;
    }
    return hash;
}

unsigned int JSHash(const char* str, unsigned int len)
{
    unsigned int hash = 1315423911;
    unsigned int i = 0;
    for(i = 0; i < len; str++, i++)
    {
        hash ^= ((hash << 5) + (*str) + (hash >> 2));
    }
    return hash;
}

unsigned int PJWHash(const char* str, unsigned int len)
{
    const unsigned int BitsInUnsignedInt
            = (unsigned int)(sizeof(unsigned int) * 8);
    const unsigned int ThreeQuarters
            = (unsigned int)((BitsInUnsignedInt * 3) / 4);
    const unsigned int OneEighth
            = (unsigned int)(BitsInUnsignedInt / 8);
    const unsigned int HighBits
            = (unsigned int)(0xFFFFFFFF) << (BitsInUnsignedInt -
                                             OneEighth);
    unsigned int hash = 0;
    unsigned int test = 0;
    unsigned int i = 0;
    for(i = 0; i < len; str++, i++)
    {
        hash = (hash << OneEighth) + (*str);
        if((test = hash & HighBits) != 0)
        {
            hash = (( hash ^ (test >> ThreeQuarters)) & (~HighBits));
        }
    }
    return hash;
}

unsigned int ELFHash(const char* str, unsigned int len)
{
    unsigned int hash = 0;
    unsigned int x = 0;
    unsigned int i = 0;
    for(i = 0; i < len; str++, i++)
    {
        hash = (hash << 4) + (*str);
        if((x = hash & 0xF0000000L) != 0)
        {
            hash ^= (x >> 24);
        }
        hash &= ~x;
    }
    return hash;
}

unsigned int BKDRHash(const char* str, unsigned int len)
{
    unsigned int seed = 131; /* 31 131 1313 13131 131313 etc.. */
    unsigned int hash = 0;
    unsigned int i = 0;
    for(i = 0; i < len; str++, i++)
    {
        hash = (hash * seed) + (*str);
    }
    return hash;
}
