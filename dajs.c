#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
int saldo, dice, guessd , bet, diceNum;
char ans[32];
saldo = 1000;


printf("Welcome to dice, you have %d in saldo\n", saldo );
printf("would you like to roll the dice?\n");
scanf("%s", &ans);


while (strcmp(ans, "yes") == 0)
{
     if (saldo < 1)
{
     printf("You Don't Have Any Money in Saldo, Thanks For Playing!\n");
     return 0;
}
else {
 srand(time(NULL));
 diceNum = rand() % 5;
 dice = diceNum + 1;
 printf("On what number would you like to bet?\n");
 scanf("%d", &guessd);
  if (guessd < 1 || guessd > 6 )
  {
      printf("guess a number between 1 and 6!\n");
      printf("Guess again?\n");
      scanf("%s", &ans);
  }

  else {
 printf("how much money do you wanna bet on number %d ? \n", guessd);
 scanf("%d", &bet);
 printf("you guessed: %d \n", guessd);
 printf("The dice says : %d \n", dice);

 if (guessd == dice)
  {
   saldo = saldo + bet ;
   printf("You won!\n saldo is now %d \n", saldo);

  }
 else if (guessd != dice)
  {
   saldo = saldo - bet ;
   printf("You've lost!\n saldo is now %d \n", saldo);
   printf("would you like to roll the dice again?\n");
   scanf("%s", &ans);
  }
}
}
}
while (strcmp(ans, "yes") != 0)
 {
  printf("Fair enough, see ya around!\n");
  printf("You ended the game with %d in saldo", saldo);
  return 0;
 }
 return 0;

}
