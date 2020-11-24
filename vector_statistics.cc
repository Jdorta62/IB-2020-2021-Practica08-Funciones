#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include "funciones_statistics.h"

int main (int argc, char* argv[]) {

  

  if (argc < 2) {
    std::cout << "Error. Pruebe #vector_statistics --help# para más información.";
    std::cout << std::endl;
    exit(EXIT_SUCCESS);
  }

  std::string parameter{argv[1]};

  if (parameter == "--help") {

    std::cout << "Este programa que calcula la desviacion estandar, máximo, mínimo y media de los n números aleatorios en el intervalo que usted indique." << std::endl;
    std::cout << "Inicie el programa de la siguiente forma: # vector_statistics.cc N M P #." << std::endl;
    std::cout << std::endl;
    std::cout << "N: número natural que indicará cantidad de números aleatorios deseados." << std::endl;
    std::cout << "M: indicará inicio del intervalo." << std::endl;
    std::cout << "P: indicará fin del intervalo." << std:: endl;
    exit (EXIT_SUCCESS);

  }

  int number_of_randoms = atoi(argv[1]);
  int lower_limit = atoi(argv[2]);
  int upper_limit = atoi(argv[3]);
  std::vector<double> vector_of_randoms = VectorRandomOrdenado(VectorRandom(number_of_randoms, lower_limit, upper_limit));

  std::cout << "La media de los números generados es: " << MediaVectorRandom(vector_of_randoms) << std::endl;

  std::cout << "El máximo número generado es: " << vector_of_randoms[vector_of_randoms.size() - 1] << std::endl;
  std::cout << "El mínimo número generado es: " << vector_of_randoms[0] << std::endl;

  std::cout << "La desviación estándar es: " << DesviacionEstandar(MediaVectorRandom(vector_of_randoms), vector_of_randoms) << std::endl;

  return 0;
}