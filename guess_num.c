#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int number, guess, attempts = 0;

  // 初始化随机数生成器
  srand(time(0));
  number = rand() % 100 + 1;

  printf("Guess the number (1 to 100):\n");

  do {
    scanf("%d", &guess);
    attempts++;

    if (guess > number) {
      printf("To high! Try again.\n");
    } else if (guess < number) {
      printf("Too low! Try again.\n");
    } else {
      printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
    }
  } while (guess != number);

  return 0;
}
