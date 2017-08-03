#pragma once

#define INT_MAX ((int)(~0U >> 1))

#define max(a, b) ((a) >= (b) ? (a) : (b))
#define abs(a) ((a) >= 0 ? (a) : (-(a)))

//stdlib
int atoi(const char *s);

//string
int strlen(const char *s);

char* strcpy(char *dst, const char *src);
char* strncpy(char *dst, const char *src, int n);

int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, int n);

void* memset(void* s, int ch, int n);
