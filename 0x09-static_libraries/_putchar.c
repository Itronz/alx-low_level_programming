#include <unistd.h>
#include <stddef.h>

int _putchar (char c)
{
  return (write(1, &c, 1));
}
