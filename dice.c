/*This C program was made by second year IT-student Jenny Enckell of NTIG Södertörn*/

//To do:
//Move the random functions into a .h file, non-global variable?? Make function run again every time called and delete previous output Number.
//Make a list of wins to losses, displayed in end
//Split up win to loss in cases
#include "dice.h"

int main()
{
  int saldo, dice, guessd , bet, diceNum;
  char ans[5];
  saldo = 1000;

  printf("Welcome to dice, you have %d in saldo\n", saldo );
  printf("would you like to roll the dice?\n");
  scanf("%s", &ans);


  while (strcmp(ans, "yes") == 0 || saldo > 0 )  //starts game loop //Fixa sa att den avslutar direkt nar saldo ar slut!!!!1!
  {
      if (saldo < 1) //if saldo is empty the game ends
          {
               printf("You Don't Have Any Money in Saldo, Thanks For Playing!\n");
               return 0;
          }
      else
          {
         srand(time(NULL)); //Random Number
         diceNum = rand() % 6;
         dice = diceNum + 1;
         printf("On what number would you like to bet?\n");
         scanf("%d", &guessd); //read guess

      if (guessd < 1 || guessd > 6 ) //Can't guess invalid number
        {
            printf("guess a number between 1 and 6!\n");
            printf("Guess again?\n");
            scanf("%s", &ans);
        }
      else //When all input is valid, the game starts here
          {
            printf("how much money do you wanna bet on number %d ? \n", guessd);
            scanf("%d", &bet); //Reads bet

                int bet(ans)

                  printf("you guessed: %d \n", guessd);
                  printf("The dice says : %d \n", dice);

                  int option(saldo){
                    return (saldo , )
                  }
                          printf("would you like to roll the dice again?\n");
                          scanf("%s", &ans);

                        }
                  else if (guessd != dice) //Loss ( 1 2 2 50 )
                        {
                         saldo = saldo - bet ;
                         printf("You've lost!\n saldo is now %d \n", saldo);
                          if (saldo > 1) { //As long as there's saldo it will ask if you want to play again
                           printf("would you like to roll the dice again?\n");
                           scanf("%s", &ans);
                          }
                          else {
                            printf("You Don't Have Any Money in Saldo, Thanks For Playing!\n");
                            return 0;
                          }
                        }
              }
        }

  }
  while (strcmp(ans, "yes") != 0) //Exits game unless answer = "yes"
   {
     if ( saldo >  ) //Add to Highscore list
   {
     char line[255];
     fgets(line, 0, fpointer);
     FILE *fPointer - fopen("DiceScore.txt", "a");
     fprintf(fpointer, "%d", saldo);
     printf("New highscore!\n")

   }

    printf("Bye Bye!\n");
    printf("You ended the game with %d in saldo", saldo); //Writes final score
    return 0;
   }
   return 0;

}
