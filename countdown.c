#include <stdio.h>

int main()
{
   int n;
   printf("Enter the starting number:");
   scanf("%d", &n);
   while (n >= 1)
  {
    printf("%d\n", n);
    n--; 
  }
  printf("done\n");
  return 0;
}
   
