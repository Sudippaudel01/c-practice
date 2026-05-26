#include <stdio.h>

int main(){
    const int  secret = 7;
    int guess;
    printf("Enter your guess number: \n");
    scanf("%d", &guess);
   if (guess == secret) {
   printf("Sucess\n");
}
  else if (guess > secret){
  printf("Too high\n");
}
 else if( guess <  secret){
 printf("Too low\n");
}

return 0;
}
