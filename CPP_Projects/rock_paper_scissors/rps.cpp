/*
Rock Paper Scissors

*/


#include <iostream>
#include <stdlib.h>



int main() {

  // Live long and prosper

  srand (time(NULL));

int computer = rand() % 3 + 1;

int user = 0;

std::cout << rand() % 3 << "\n";
std::cout << rand() % 3<< "\n";
std::cout << rand() % 3<< "\n";

std::cout << "====================\n";
std::cout << "rock paper scissors!\n";
std::cout << "====================\n";

std::cout << "1) ✊\n";
std::cout << "2) ✋\n";
std::cout << "3) ✌️\n";

std::cout << "shoot! ";

std::cin >> user;





}