#include "libc.h"
int atoi(const char *s) { int val = 0; int sign = 1; if (s == 0) return 0;       if ('-' == *s) sign = -1; if ('-' == *s || '+' == *s) s++; while (*s >= '0' && *s <= '9') {  val = val * 10 + (((int)*s) - 0x30);  s++; } return val * sign;}
int strlen(const char *s) { int num = 0; while (*s != '\0') {  num++;  s++; } return num;}
char* strcpy(char *dst, const char *src) { char *addr = dst; while ((*dst++ = *src++) != '\0'); return addr;}
char* strncpy(char *dst, const char *src, int n) { char *addr = dst; int i = 0; while (i++ < n && (*dst++ = *src++) != '\0'); if ((*dst) != '\0') {  *dst = '\0'; } return addr;}
int strcmp(const char *s1, const char *s2) { unsigned char c1, c2;
 do {  c1 = *s1++;  c2 = *s2++;  if (c1 == '\0' || c2 == '\0') {   return c1 - c2;  } } while (c1 == c2);
 return c1 - c2;}
int strncmp(const char *s1, const char *s2, int n) { unsigned char c1 = '\0'; unsigned char c2 = '\0';
 while (n-- > 0) {  c1 = (unsigned char)*s1++;  c2 = (unsigned char)*s2++;  if (c1 == '\0' || c2 == '\0' || c1 != c2) {   return c1 - c2;  } }
 return c1 - c2;}
void* memset(void *s, int ch, int n) { unsigned char* p = (unsigned char*)s; while (n-- > 0) {  *p++ = (unsigned char)ch; } return s;}
