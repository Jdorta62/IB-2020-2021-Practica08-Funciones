#include <cmath>

int CuadradoDeLaSuma(int limite_operaciones) {

  int resultado_operaciones{0};

  for (int i{1}; i <= limite_operaciones; ++i) {
    resultado_operaciones = resultado_operaciones + i;
  }

  resultado_operaciones = pow(resultado_operaciones,2);
  return resultado_operaciones;
}

int SumaDeLosCuadrados(int limite_operaciones) {

  int resultado_operaciones{0};

  for (int i {1}; i <= limite_operaciones; ++i) {
    resultado_operaciones = resultado_operaciones + pow(i,2);
  }

  return resultado_operaciones;

}
