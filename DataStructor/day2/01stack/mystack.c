#include "mystack.h"
#include <stdlib.h>

void initStack(Stack * s, int size) {
    s->_len = size;
    s->_space = (char *)malloc(sizeof(char)*s->_len);
    s->_top = 0;
}

int isStackFull(Stack * s) {
    return s->_top == s->_len;
}

int isStackEmpty(Stack * s) {
    return s->_top == 0;
}

void push(Stack * s, char ch) {
    s->_space[s->_top++] = ch;
}

char pop(Stack * s) {
    return s->_space[--s->_top];
}

void clearStack(Stack * s) {
    free(s->_space);
}

void resetStack(Stack * s) {
    s->_top = 0;
}