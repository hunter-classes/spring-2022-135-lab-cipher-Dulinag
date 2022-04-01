#include <iostream>
#include <cctype>


#include "funcs.h"

int main()
{

  std::cout << "encryptCaesar: " << std::endl;

  std::string jo = "results";
  std::string msg = encryptCaesar(jo,5);



  // int counter = 0;
//  for(int i = 0; i <= msg.length(); i++){



//  if (isalpha(msg[i])) {

//     counter += 1;



  //  }

//  }


decoder(msg);
  //solve(msg);
  std::cout << "Prints out the 26 rotations and their freqencies with the correct one: " << std::endl;
  solve(msg);
  std::cout<< std::endl;
  return 0;
}
