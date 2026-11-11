#include <iostream>
#include <random>
using namespace std;

int main(){
  random_device rd;
  mt19937 gen(rd());
  uniform_int_distribution<int> dist(0,11);
  int daysUntilExpiration = dist(gen);
  cout<<"Days until subscription expires: "
      <<daysUntilExpiration<<endl;
  return 0;    
}
