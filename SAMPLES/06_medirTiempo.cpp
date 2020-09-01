#include <iostream>
#include <ctime>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <unistd.h>       /* sleep */
using namespace std;

int main ()
{
  clock_t t;
  cout << "Iniciando Reloj..." << endl;
  t = clock();
  sleep(0);
  t = clock() - t;
  cout << ((float)t) << " segundos." << endl;
  return 0;
}