#include <iostream>
#include "src/function.h"

using namespace std;

int main(){

std::vector<unsigned int> v = fib_below_n(2);

for(int i = 0; i<v.size(); i++){

  cout<<"v["<<i<<"]="<<v[i]<<endl;
  
}
return 0;
}