#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  const int MIN = 1;
  const int MAX = 100;

  int guess;
  int guesses = 0;
  int answer;
  char grade[][40] = {"You're a super duper super hero!",
                      "You're a Genius!",
                      "You're just an average Joe!",
                      "You're lucky to have friends!",
                      "My dog is smarter!",
                      "Go back to bed, try again tomorrow!"};

  srand(time(0)); // uses the current time as a seed

  answer = (rand() % MAX) + MIN; // generates a random number between MAX and MIN

  printf("\n~ This is a guessing game ~\n");
  printf("Try to find the number between 1 and 100!\n\n");

  do {
    printf("Please enter your guess: ");
    scanf("%d", &guess);
      if (guess > answer) {
        printf("\nYour guess was too high!\n");
      }
      else if (guess < answer) {
        printf("\nYour guess was too low!\n");
      }
      else {
        printf("\nYeah! You guessed correctly!\n");
      }
    guesses = guesses + 1;              
  } while (guess != answer);

  printf("========================\n");
  printf("The secret number is: %d\n", answer);
  printf("It took %d tries to find the answer\n", guesses);

  if (guesses <= 4) {
    printf("%d guesses ranks you -> %s\n", guesses, grade[0]);
  }
  else if ((guesses >= 5) && (guesses <= 6)) {
    printf("%d guesses ranks you -> %s\n", guesses, grade[1]);
  }
  else if ((guesses >=7) && (guesses <= 8)) {
    printf("%d guesses ranks you -> %s\n", guesses, grade[2]);
  }
  else if ((guesses >=9) && (guesses <= 10)) {
    printf("%d guesses ranks you -> %s\n", guesses, grade[3]);
  }
  else if ((guesses >=11) && (guesses <= 12)) {
    printf("%d guesses ranks you -> %s\n", guesses, grade[4]);
  }
  else {
    printf("%d guesses ranks you -> %s\n", guesses, grade[5]);
  }
  
  printf("========================\n");

  return 0;
}