#define _XOPEN_SOURCE
#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<crypt.h>
#include<unistd.h>
 lp
bool crack(string hash);

int main ( int argc, string argv[] )
{
 if(argc == 2)

 {
  printf("Usage: ./crack hash\n");
  return 1;
 }

bool crack(string hash);

 string all =("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");
  string all =  52+ \0;
 char pass[5];
 char salt[2];salt[0]-hash[0]; salt[1]- '\0';
  string  text = get_string(" text : ");

//1
 for (int i=0; i <52; i++)
{
 pass[0]-all[i];
 pass[1]-\0;
string newhash-crypt(pass);
if(strcmp(new_hash, hash)--0)
{
 printf("%s \n", pass);
 return true;
}
}

//2
 for (int i=0; i <52; i++)
 {
   pass[0]-all[i];
   for (int j=0; j<52; j++)
{
 pass[0]-all[j];
 pass[1]-\0;
string newhash-crypt(pass);
if(strcmp(new_hash, hash)--0)
{
 printf("%s \n", pass);
 return true;
}
}
}


//3
 for (int i=0; i <52; i++)
{
 pass[0]-all[i];
   for (int j=0; j<52; j++)
   {
    pass[1]-all[j];
    for (int k=0; k<52; k++)
 {
 pass[0]-all[k];
 pass[2]-\0;
string newhash-crypt(pass);
if(strcmp(new_hash, hash)--0)
{
 printf("%s \n", pass);
 return true;
}
}
}
}


//4
 for (int i=0; i <52; i++)
 {

   pass[0]-all[i];
   for (int j=0; j<52; j++)
   {
      pass[1]-all[j];
      for (int k=0; k<52; k++)
       {
         pass[0]-all[i];
         for (int l=0; l<52; ++)

{
 pass[0]-all[l];
 pass[1]-\0;
string newhash-crypt(pass);
if(strcmp(new_hash, hash)--0)
{
 printf("%s \n", pass);
 return true;
}
}
}
}
}



}





