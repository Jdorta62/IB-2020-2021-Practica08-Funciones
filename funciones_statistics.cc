#include <stdlib.h>
#include <vector>
#include <cmath>
#include <time.h>

std::vector<double> VectorRandom(int cantidad_randoms, int limite_inferior, int limite_superior) {

  double numerorandom;
  std::vector<double> vector_of_random; 
  srand(time(NULL));

  for (int i{0}; i < cantidad_randoms; ++i) {

    numerorandom = (limite_inferior*100) + rand() % (((limite_superior*100) + 1) - (limite_inferior*100));  
    numerorandom = numerorandom/100;
    vector_of_random.push_back(numerorandom);

  }

  return vector_of_random;

}


std::vector<double> VectorRandomOrdenado(std::vector<double> vector_randoms) {

  std::vector<double> vector_bubble_random;
  double variable_almacenamiento_momentaneo;

  for (int i{0}; i <= vector_randoms.size(); ++i) {

    for (int j = i+1; j < vector_randoms.size(); ++j) {

      if (vector_randoms[i] >= vector_randoms [j]) {

        variable_almacenamiento_momentaneo = vector_randoms[i];
        vector_randoms[i] = vector_randoms[j];
        vector_randoms[j] = variable_almacenamiento_momentaneo;

      }

    }

  }

  vector_bubble_random = vector_randoms;
  return vector_bubble_random;

}


double MediaVectorRandom(std::vector<double> vector_random) {
  
  double media_de_randoms{0};

  for (int i{0}; i < vector_random.size(); ++i) {

    media_de_randoms = media_de_randoms + vector_random[i];

  }

  media_de_randoms = media_de_randoms/vector_random.size();
  return media_de_randoms;
}


double DesviacionEstandar(double media, std::vector<double> vector_doubles) {

  double sumatorio{0.0};
  double desviacion;

  for (int i{0}; i < vector_doubles.size(); ++i) {

    sumatorio = sumatorio + pow(abs(vector_doubles[i]-media),2);

  }

  desviacion = sqrt((sumatorio/vector_doubles.size()));

  return desviacion;

}