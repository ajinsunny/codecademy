#include <iostream>

using namespace std;

int main() {

  double pesos,reais, soles;
  double dollars; 

  cout<< "Enter number of Colombian Pesos:"<<"\n";
  cin>>pesos;

  cout<< "Enter number of Colombian Pesos:"<<"\n";
  cin>>reais;

  cout<< "Enter number of Colombian Pesos:"<<"\n";
  cin>>soles;

  // pesos to USD 1pesos = 0.046USD
  // 1 reais = 0.20 USD  
  // 1 soles = 0.29 USD

  dollars = 0.00032 * pesos + 0.27 * reais + 0.3 * soles;

  cout<< "Total USD = $" << dollars << "\n";
  
}