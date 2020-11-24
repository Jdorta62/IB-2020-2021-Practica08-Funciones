#include <iostream>
#include <cstdlib>
#include <string>
#include "primefunciones.h"

int main (int argc, char * argv[]) {

  std::string convert = argv[1];
  int primeposition = stoi(convert);

  std::cout << "El primo #" << primeposition << " es: " << PrimePosition(primeposition)
  << std::endl;

  return 0;


}