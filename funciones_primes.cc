#include <vector>

int PrimePosition (int positionprime) {

  int posiblenumeroprimo{2};
  std::vector<int> vectorofprimes;
  int long usernumber {999999999999};

  while (usernumber > posiblenumeroprimo && vectorofprimes.size() < positionprime)  {
    bool isprime = true;
    for (int i = 2; i < posiblenumeroprimo && (isprime == 1); ++i) {
   
      if (posiblenumeroprimo % i == 0) {
        isprime = false;
      }

    }

    if (isprime == 1) {
      vectorofprimes.push_back(posiblenumeroprimo);
    }
    ++posiblenumeroprimo;
  }


  return vectorofprimes[positionprime - 1];

}