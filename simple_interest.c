#include <stdio.h>

int main()
{ 
  float principal, rate, time, simpleInterest;
 printf("Enter your Principal: ");
 scanf("%f",&principal);

 printf("Enter your rate: ");
 scanf("%f", &rate);

printf("Enter your time: ");
 scanf("%f", &time);

simpleInterest = (principal * rate * time) / 100 ;
printf("Result %.2f ", simpleInterest);

return 0;
}


