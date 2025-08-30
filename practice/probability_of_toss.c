#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum CoinFace { TAILS, HEADS };

enum CoinFace coin_toss() {
   return rand() % 2;
}

int main() {
   int num_tosses = 1000;
   int heads = 0;
   int tails = 0;

   srand(time(NULL));

   for (int i = 0; i < num_tosses; i++) {
       enum CoinFace toss = coin_toss();
       if (toss == TAILS) {
           tails++;
       } else {
           heads++;
       }
   }

   double prob_heads = (double)heads / num_tosses;
   double prob_tails = (double)tails / num_tosses;

   printf("Number of Heads: %d\n", heads);
   printf("Number of Tails: %d\n", tails);
   printf("Probability of Heads: %.2f\n", prob_heads);
   printf("Probability of Tails: %.2f\n", prob_tails);

   return 0;
}