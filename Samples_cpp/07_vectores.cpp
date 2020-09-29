#include <iostream>
#include <vector>

using namespace std;

int main ()
{
  //std::vector<int> myvector; //sin usar namespace
  vector<int> myvector;
  int num;

  cout << "Inserta números en un vector hasta recibir un 0" << endl;

  cin >> num;
  while(num != 0){
    myvector.push_back(num);
    cin >> num;
  }
  
  for(int i = 0; i < myvector.size(); i++){
    cout << myvector[i] << " ";
  }

  /*for(auto it = myvector.begin(); it != myvector.end(); ++it){
    cout << *it << " ";
  }*/

  cout << endl;
  
  return 0;
}