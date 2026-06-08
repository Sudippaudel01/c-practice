#include <stdio.h>

int main(int argc, char *argv[]) 
{
    printf("Program name: %s\n", argv[0]);
    printf("Number of arguments: %d\n", argc);
    
    if (argc > 1)
    {
       printf("Hello, %s!\n", argv[1]);
    }
    else 
    {
       printf("Hello, stranger!\n");
    }
    return 0;
}      
