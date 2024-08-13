#include <iostream>
using namespace std;
template <class T>
class Test
{
  private:
    T val;
    public:
      static int count;
      Test() { count++; }
};
template <class T>
int Test<T>::count = 0;
int main ()
{
  Test<int> a;
  Test<int> b;
  Test<double> c;
  cout << Test<int>::count << "\n";
  cout << Test<double>::count << "\n";
  return 0;
}