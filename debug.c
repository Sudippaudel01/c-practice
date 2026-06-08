#include <stdio.h>

#define DEBUG // comment this out to switch modes

int main()
{
#ifdef DEBUG
     printf("Debug mode is ON. Printing extra info.\n");
#else
     printf("Production mode.\n")
#endif
     return 0;
}
