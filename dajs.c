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


while (strcmp(ans, "yes") == 0) //Startar en loop som låter spelet fortsätta så länge du svarar "yes"
{
     if (saldo < 1) //Avslutar spelet om saldo är tommt
        {
             printf("You Don't Have Any Money in Saldo, Thanks For Playing!\n");
             return 0;
        }
    else
    {   
     srand(time(NULL)); //Random Nummer för tärningen
     diceNum = rand() % 5;
     dice = diceNum + 1;
     printf("On what number would you like to bet?\n");
     scanf("%d", &guessd); //Läser in gissning

  if (guessd < 1 || guessd > 6 ) //Du kan inte gissa ett nummer som inte finns på tärningen
    {
        printf("guess a number between 1 and 6!\n");
        printf("Guess again?\n");
        scanf("%s", &ans);
    }

  else //Här börjar själva spelet om du har pengar och väljer ett nummer som finns
      {
      printf("how much money do you wanna bet on number %d ? \n", guessd);
      scanf("%d", &bet); //Läser satsning
      printf("you guessed: %d \n", guessd);
      printf("The dice says : %d \n", dice);

         if (guessd == dice) //Vinst
            {
              saldo = saldo + bet ;
              printf("You won!\n saldo is now %d \n", saldo);

            }
            else if (guessd != dice) //Förlust
            {
             saldo = saldo - bet ;
             printf("You've lost!\n saldo is now %d \n", saldo);
             printf("would you like to roll the dice again?\n");
             scanf("%s", &ans);
            }
          }
    }
}
while (strcmp(ans, "yes") != 0) //Avslutar spelet om du inte svarar "yes"
 {
  printf("Fair enough, see ya around!\n");
  printf("You ended the game with %d in saldo", saldo); //Skriver ut ditt slutliga saldo
  return 0;
 }
 return 0;

}
