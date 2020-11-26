#include <iostream>
#include <vector>
#include <string>

bool EstaAbracadabra(std::string oracion, std::string abracadabra) {

  int cantidad_caracteres_iguales{0};  
  bool esta_abracadabra;

  for (int j{0}; j < oracion.length() && cantidad_caracteres_iguales < abracadabra.length(); ++j) {
      
      int auxiliar = j;
      esta_abracadabra = true;

      for (int k{0}; k < abracadabra.length() && esta_abracadabra==true; ++k) {
        if (oracion[auxiliar] == abracadabra[k]) {
          ++cantidad_caracteres_iguales;
        }
        if (oracion[auxiliar] != abracadabra[k]) {
          cantidad_caracteres_iguales = 0;
          esta_abracadabra = false;
        }
        ++auxiliar;
      }
  
    }

  return esta_abracadabra;

}
