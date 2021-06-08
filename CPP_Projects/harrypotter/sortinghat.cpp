#include<iostream>

using namespace std;

int main(){

  int gryffindor = 0;
  int hufflepuff = 0;
  int ravenclaw = 0;
  int slytherin = 0;

  int answer1 = 0;
int answer2 = 0;
int answer3 = 0;
int answer4 = 0;

cout << "=====================\n";
cout << "The Sorting Hat Quiz!\n";
cout << "=====================\n\n";


cout << "Q1) When I'm dead, I want people to remember me as:\n\n";

cout << "  1) The Good\n";
cout << "  2) The Great\n";
cout << "  3) The Wise\n";
cout << "  4) The Bold\n\n";

cin>>answer1;
if (answer1 == 1) {

  hufflepuff++;

}
else if (answer1 == 2) {

 slytherin++;

}
else if (answer1 == 3) {

  ravenclaw++;

}
else if (answer1 == 4) {

  gryffindor++;

}
else {

  std::cout << "Invalid input\n";

}



}