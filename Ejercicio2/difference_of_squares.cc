#include <iostream>
#include "difference_of_squares_funciones.h"

int main(int argc, char* argv[]) { 

  if ((argc < 2 ) || argc == 1) {
    std::cout << "difference_of_squares: falta un número natural como parámetro. Pruebe 'difference_of_squares --help' para más información.";
    std::cout << std::endl;
    return -1;
    exit(EXIT_SUCCESS);
  }

  std::string parameter{argv[1]};

  if (parameter == "--help") {
    std::cout << "Este es programa, en orden de './difference_of_squares N' (N número natural), que calcula la diferencia del cuadrado de la suma y de la suma del cuadrado de los N primeros número." << std::endl;
    exit (EXIT_SUCCESS);
  }

  int rango_operaciones = atoi(argv[1]);

  std::cout << "El resultado es: " << CuadradoDeLaSuma(rango_operaciones) -  SumaDeLosCuadrados(rango_operaciones) << "." << std::endl;
  return 0;
}
