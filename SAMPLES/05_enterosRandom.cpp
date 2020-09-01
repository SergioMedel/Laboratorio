#include <random>
#include <iostream>

using namespace std;

int main() {
 srand(time(NULL)); //genera una semilla aleatoria

 cout << "Aleatorio dist. normal: " << rand() << endl;
 cout << "Aleatorio entre 0 y 99: " << rand() % (100) << endl;
 cout << "Aleatorio entre 10 y 20: " << 10 + rand() % (10) << endl;
 return 0;
}
