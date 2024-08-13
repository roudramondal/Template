#include <iostream>
using namespace std;
template <int n>
struct funstruct
{
  static const int val = 2 * funstruct<n - 1>::val;
  
};
template<>
struct funstruct<0>
{
  static const int val = 1;
};

int main ()
{
  cout << funstruct<10>::val << "\n";

  return 0;
}