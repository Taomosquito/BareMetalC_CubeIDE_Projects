#include <stdio.h>
#include <math.h>

int number;
int *pNumber = &number;

void FIND_PRIMES_UP_TO_NUMBER(int number) {
  if (number >= 2){

    int is_prime = 1;

    for (int i = 2; i <= sqrt(number); i++) {
      if (number % i == 0) {
          is_prime = 0;
          break;
      }
    }

    if (is_prime) {
      printf("%d\n", number);  // Print the prime number
    }
  }
}


int main(){
  for (int i = 1; i <= 25; i++){
    FIND_PRIMES_UP_TO_NUMBER(i);
  }
  return 0;
}
