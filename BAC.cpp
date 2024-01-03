#include <fstream>
using namespace std;
int main()
{
  int* ap = new int[10];
  for (int i = 0; i < 10; i++)
    ap[i] = 0;
  ifstream f("BAC.in");
  int x;
  while (f >> x)
  {
    int p = 0;
    while (x > 9)
    {
      x /= 10;
      p++;
    }
    ap[p]++;
  }
  f.close();
  ofstream g("BAC.out");
  for (int i = 0; i < 10; i++)
    if (ap[i])
    {
      int p = 1;
      for (int j = 0; j < i; j++, p *= 10);
      for (int j = 0; j < ap[i]; j++)
        g << p << ' ';
    }
  g.close();
  return 0;
}

