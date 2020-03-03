#ifndef HASH_H
#define HASH_H

unsigned int RSHash(const char* str, unsigned int len);
unsigned int JSHash(const char* str, unsigned int len);
unsigned int PJWHash(const char* str, unsigned int len);
unsigned int ELFHash(const char* str, unsigned int len);
unsigned int BKDRHash(const char* str, unsigned int len);


#endif // HASH_H
