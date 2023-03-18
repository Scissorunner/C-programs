#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  char player;
  char computer;
  int player_wins = 0;
  int computer_wins = 0;

  // Intro
  printf("------------------------------------\n");
  printf("      Rock-Paper-Scissors Game!\n");
  printf("Win 5 games and you're the Champion!\n");
  printf("------------------------------------\n");

  do { // repeat all code until player or computer has 5 wins

    do {
      printf("\nEnter one of the following:\n");
      printf("===========================\n");
      printf("'r' for rock\n");
      printf("'p' for paper\n");
      printf("'s' for scissors\n");
      printf("'q' to quit\n");
      printf("===========================\n");
      printf("--> ");
      scanf("%c", &player);
    } while (player != 'r' && player != 'R' && player != 'p' && player != 'P' && player != 's' && player != 'S' && player != 'q');
    
    if (player == 'q') {
      break;
    }

  // print players choice
  printf("Your choice: ");
  switch(player) {
    case 'r':
      printf("Rock\n");
      break;
    case 'p':
      printf("Paper\n");
      break;   
    case 's':
      printf("Scissors\n");
      break;   
    default:
      break;
  }

  // get random number 1-3 from computer
  srand(time(0)); // enter 0 or NULL, uses the current time as a seed
  int num = rand() % 3 + 1;
  switch (num) {
    case 1:
      computer = 'r';
      break;
    case 2:
      computer = 'p';
      break;
    case 3:
      computer = 's';
      break;  
    default:
      break;
  }

  // print computers choice
  printf("Computer's choice: ");
  switch(computer) {
    case 'r':
      printf("Rock\n");
      break;
    case 'p':
      printf("Paper\n");
      break;   
    case 's':
      printf("Scissors\n");
      break;
    default:
      break;
  }

  // determines who wins, print results
  if (player == 'r' && computer == 'r') {
    printf("\tIt's a tie\n");
    printf("\tPlayer wins: %d --> Computer wins: %d\n", player_wins, computer_wins);
  }
  else if (player == 'p' && computer == 'r') {
    printf("\tPaper covers Rock, you win!\n");
    player_wins = player_wins + 1;
    printf("\tPlayer wins: %d --> Computer wins: %d\n", player_wins, computer_wins);
  }
  else if (player == 's' && computer == 'r') {
    printf("\tRock crushes Scissors, you lose!\n");
    computer_wins = computer_wins + 1;
    printf("\tPlayer wins: %d --> Computer wins: %d\n", player_wins, computer_wins);
  }
  else if (player == 'p' && computer == 'p') {
    printf("\tIt's a tie\n");
    printf("\tPlayer wins: %d --> Computer wins: %d\n", player_wins, computer_wins);
  }
  else if (player == 's' && computer == 'p') {
    printf("\tScissors cuts Paper, you win!\n");
    player_wins = player_wins + 1;
    printf("\tPlayer wins: %d --> Computer wins: %d\n", player_wins, computer_wins);
  }
  else if (player == 'r' && computer == 'p') {
    printf("\tPaper covers Rock, you lose!\n");
    computer_wins = computer_wins + 1;
    printf("\tPlayer wins: %d --> Computer wins: %d\n", player_wins, computer_wins);
  }
  else if (player == 's' && computer == 's') {
    printf("\tIt's a tie\n");
    printf("\tPlayer wins: %d --> Computer wins: %d\n", player_wins, computer_wins);
  }
  else if (player == 'r' && computer == 's') {
    printf("\tRock crushes Scissors, you win!\n");
    player_wins = player_wins + 1;
    printf("\tPlayer wins: %d --> Computer wins: %d\n", player_wins, computer_wins);
  }
  else if (player == 'p' && computer == 's') {
    printf("\tScissors cuts Paper, you lose!\n");
    computer_wins = computer_wins + 1;
    printf("\tPlayer wins: %d --> Computer wins: %d\n", player_wins, computer_wins);
  }

  // count who wins 5 games
  if (computer_wins == 5) {
    printf("\n===================================\n");
    printf("Computer Wins! Stinking computer!\n");
    printf("Your score: %d --> Computers score: %d\n", player_wins, computer_wins);
    printf("===================================\n");
    break;
  }
  if (player_wins == 5) {
    printf("\n===================================\n");
    printf("You're the Champion!!!\n");
    printf("Your score: %d --> Computers score: %d\n", player_wins, computer_wins);
    printf("===================================\n");
    break;
  }

  } while (player != 'q');

  printf("\t\n***Thanks for playing!***\n\n");

  return 0;
}