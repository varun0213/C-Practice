#include <iostream>
#include <cmath>

//using namespace std;

int main()
{

  double a;
  double b;

  std::cout<<"Enter Number a: ";
  std::cin>>a;

  std::cout<< "Enter Number b: ";
  std::cin>>b;

  //a = pow(a, 2);
  //b = pow(b, 2);

  const double c = sqrt(pow(a, 2) + pow(b, 2));

  std::cout<<"The Square Root: "<<c;

  return 0;




}