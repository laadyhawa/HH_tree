#include<stdio.h>
#include<cs50.h>

int main (void)
{

    int cinq=500;
    int deuxcinq=250;
    int deuxcent=200;
    int cent=100;
    int cinquante=50;
    int vingtcinq= 25;
    int dix=10,
    i=0;
     int montant= get_int("montant: ");

     while(montant>= cinq)
    {
        montant= montant-cinq;
        i++;
    }

       while(montant>= deuxcinq)
    {
        montant= montant- deuxcinq;
        i++;
    }

       while(montant>= deuxcent)
    {
        montant= montant- deuxcent;
        i++;
    }

   while(montant>= cent)
    {
        montant= montant- cent;
        i++;
    }

       while(montant>= cinquante)
    {
        montant= montant-cinquante;
        i++;
    }

       while(montant>= vingtcinq)
    {
        montant= montant- vingtcinq;
        i++;
    }

       while(montant>= dix)
    {
        montant= montant- dix;
        i++;
    }

    {
        printf("number of coins %i :", i);
    }

}
