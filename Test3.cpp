#include <iostream>
using namespace std;
template <class T>
T max (T&a,T&b)
{
  return (a > b ? a : b);

}
int main()
 {
int i = 5, j = 6, k;
long l = 10, m = 5, n;
k = max(i, j);
n = max(l, m);
cout << k << "\n";
cout << n << "\n";
return 0;
 }