#include<iostream>
using namespace std;

int largest( int x, int y , int z)

{

if(x>y && x>z){

  return x;
}
else if(x<y && x<z) {

  return y;
}
else {
  return z;
}
}
