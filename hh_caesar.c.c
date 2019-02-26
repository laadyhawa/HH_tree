#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<cs50.h>
#include<ctype.h>

 int main(int argc, string argv[])

{

if (argc == 2)
{
string plaintext;

 int k = atoi(argv[1]);

 plaintext=get_string("plaintext:");

 printf(" cipher:");
 for (int i=0; i<strlen(plaintext); i++)

 if(isalpha(plaintext[i]))
 {
     if(islower(plaintext[i]))
     {
      printf("%c", (((plaintext[i]-97)+k)%26)+97);
     }

  if(isupper(plaintext[i]))
 {
  printf("%C", (((plaintext[i]-65)+k)%26)+65);
 }
}
 else
 {
  printf("%c", plaintext[i]);
 }

 printf("\n");

}

}





