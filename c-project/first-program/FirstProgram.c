#include <stdio.h>
#include <string.h>

int main() {
char foo[] = "Hello ";
char bar[] = "World!";
strncat(foo,bar,5);
printf("%s",foo);
  return 0;
}