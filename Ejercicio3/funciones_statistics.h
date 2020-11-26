#include "funciones_statistics.cc"

std::vector<double> VectorRandom(int cantidad_randoms, int limite_inferior, int limite_superior);

std::vector<double> VectorRandomOrdenado(std::vector<double> vector_randoms);

double MediaVectorRandom(std::vector<double> vector_random);

double DesviacionEstandar(double media, std::vector<double> vector_doubles);
