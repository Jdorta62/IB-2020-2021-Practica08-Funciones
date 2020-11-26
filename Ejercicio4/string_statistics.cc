#include <iostream>
#include <vector>
#include <string>
#include "string_statistics_funciones.h"

int main () {
  
  std::string abracadabra = "abracadabra";
  std::vector<std::string> vector_words = {"En Harry Potter, algo parecido al abracadabra se usa", "ella pega muy fuerte", "Arriba España y viva el Rey", "El perro come mucho", "mi novia es danesa", "me encanta la canela", "los caracoles son pegajosos", "solo dice abracadabra y aparece", "nada como música latina", "hace frío"};

  for (int i{0}; i < vector_words.size(); ++i) {

    std::string oracion = vector_words[i];
    std::cout << "Cadena #" << i << ":" << std::endl;
    std::cout << std::endl;

    std::cout << "Tiene " << oracion.length() << " caracteres" << std::endl;
    std::cout << "El último caracter de la cadena es: -" << oracion[0] << "-" << std::endl;
    std::cout << "El último caracter de la cadena es: -" << oracion[oracion.length()-1] << "-" << std::endl;

    if (EstaAbracadabra(oracion,abracadabra)== 1) {
      std::cout << "-abracadabra- SI está en la cadena." << std::endl;
    } else {
      std::cout << "-abracadabra- NO está en la cadena" << std::endl;
    }

    std::cout << std::endl;

  }
}
