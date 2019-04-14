#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int saldo, dice, guessd , bet, diceNumn, win, los, option;
char ans[5];

saldo = 1000;

void bet(ans) { //if a bet is invalid
    while ( bet > saldo || bet < 0) {
      printf("invalid bet.\n
      Try again?\n");
      scanf("%s", &ans);
    }
  return(ans);
}

//Put option inside oper??
int oper(option) { //compares if win or loss
  if ((guessd - dice) == 0) //if you guessed the same number as the dice.
  {
    option = 1 ; // makes the next function perform case 1 (win)
  }
  elif ((guessd - dice) ==! 0)
  {
    option = 2 ;
  }
  return(option);
}

//The cases of loss or win
 int option(saldo);
 switch (option)
 {
 case 1: //win
 saldo = saldo + bet;
 printf("win, saldo: %d\n", saldo);
 return(saldo); // right????
  case 2: //loss
  saldo = saldo - bet;
  printf("loss, saldo: %d\n" , saldo);
  break; //return saldo??
  //What should default be in this?
 }
