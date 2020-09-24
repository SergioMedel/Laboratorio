#include <iostream>
#include <ctime>       /* clock_t, clock, CLOCKS_PER_SEC */
#include <unistd.h>       /* sleep */
using namespace std;

int main ()
{
  int d = 0;
  clock_t t;
  time_t f;
  cout << "Iniciando Reloj..." << endl;
  t = clock();
  f = time(0); //fecha
  //sleep(3); //cantidad de segundos a esperar
  //duerme completamente el proceso así que no contará el tiempo
  for(int i = 0; i < CLOCKS_PER_SEC*64*10 ; i++){
    d++;
  }
  t = clock() - t;
  cout << ((float)t/CLOCKS_PER_SEC) << " segundos, el valor d = " << d << " y comenzó el día " << ctime(&f) << endl;
  return 0;
}
