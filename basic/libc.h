#pragma once

#define basic_strlen strlen

//string
int strlen(char const *s);

char* strcpy(char *dst, char const *src);
char* strncpy(char *dst, char const *src, int n);

int strcmp(char const *s1, char const *s2);
int strncmp(char const *s1, char const *s2, int n);

