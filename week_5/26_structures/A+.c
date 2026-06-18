#include <stdio.h>

int main(void){

char s[] ="3FMNV";
char* a = &s[1];
char c = s[2];
s[2]  = *a;
s[1] = c;
puts (s);

}