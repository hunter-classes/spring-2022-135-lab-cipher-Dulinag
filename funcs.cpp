#include <iostream>
#include "funcs.h"
#include <ctype.h>
#include <string.h>
#include <string>


#include <stdlib.h>   // std::string, std::stoi
#include <cmath>


double eng_frequencies[26] = {0.082, 0.015, 0.027, 0.047, 0.13, 0.022, 0.02, 0.062, 0.069, 0.0016, 0.0081, 0.04, 0.027, 0.067, 0.078, 0.019, 0.0011, 0.059, 0.062, 0.096, 0.027, 0.0097, 0.024, 0.0015, 0.02, 0.0078};

double distance(double eng_frequencies, double v1[],
      double v2[],int len){
        return 0.0;
      }


      char shiftChar(char c, int rshift){

      if(c >= 'A'&& c <= 'Z'){

        c = 'A' + (c - 'A' + rshift +26)%26;
      }

      if(c >= 'a'&& c <= 'z'){

        c = 'a' + (c - 'a' + rshift +26)%26;

      }

        return c;
      }






      std::string encryptCaesar(std::string plaintext, int rshift){
        std::string r ="";
        char c;

        for (int i = 0; i < plaintext.length(); i++){

          r += shiftChar(plaintext[i], rshift);
        }
std::cout << r << std::endl;
      return r;


      }


double decoder(std::string str1){

const char *input = str1.data();

  std::string decoded = "";
  int sum = 0;

  double counts[26] = {0};

  int i;
  size_t len = strlen(input);


  for (i = 0; i < len; i++) {
      char c = input[i];
      if (!isalpha(c)) continue;
      counts[(int)(tolower(c) - 'a')]++;
  }
int a;
  for (i = 0; i < 26; i++) {


counts[i] = counts[i]/len;


}

for (i = 0; i < 26; i++){


//  std::cout<< counts[i]<< " ";
}

double newarr[26];
for (i = 0; i < 26; i++){

newarr[i] = eng_frequencies[i] - counts[i];


 //std::cout<< newarr[i]<< " ";

}
double newarr2[26];
for (i = 0; i < 26; i++){

newarr2[i] = newarr[i] * newarr[i];


 //std::cout<< newarr2[i]<< " ";
}

std::cout<<std::endl;

double counter;


for (i = 0; i < 26; i++){

  counter = sqrt(newarr2[i]);
}

double index;
double newarr3[26];

for (i = 0; i < 26; i++){

  newarr3[i] = sqrt(newarr2[i]);

//std::cout<<   newarr3[i] << " ";
}

double min = newarr3[0];

for (i = 0; i < 26; i++){
  if (newarr3[i] < min){
    min = newarr3[i];

  }

}
std::cout << min <<  std::endl;
std::cout<<std::endl;
return min;
}


//  encrypted_string = std::to_string(min);
    //std::cout << encrypted_string <<  std::endl;



std::string solve(std::string encrypted_string){
float min_dis = 1000,dis;
std::string min,temp;
for(int i=1;i<26;i++){
temp = encryptCaesar(encrypted_string,-i);
dis = decoder(temp);
if(dis<min_dis){
min_dis=dis;
min = temp;

}
}
return min;


}
