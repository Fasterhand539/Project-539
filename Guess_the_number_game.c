#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int random_number,guess_num,attempt;
   srand(time(NULL));
   random_number=rand()%100+1;
 printf("Welcome to the game.\nYou have to guess a number between 0 and 10 to complete the challenge.\nBest of luck\n");
    
   for(attempt=1;guess_num!=random_number;attempt++)

   
    {
         printf("Insert your guess\n");
   scanf("%d",&guess_num);
     if (guess_num==random_number)
        break;
      else if (guess_num<random_number) 
        printf("guess larger\t");
        else
        printf("guess smaller\t");  
    }
    printf("Congrats,You guessed right within %d tries.",attempt);
    printf("Developed by Fasterhand539");

  
    return 0;
}