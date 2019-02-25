#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void)
{



    long long cardnumber = get_long_long("card number: ");
     long long  digits=0;

      int counter=0;

    while (cardnumber != 0)
       {
        counter++;
         digits = cardnumber /= 10;
      }


    printf("digits:%i ", counter);


        return 0;
}