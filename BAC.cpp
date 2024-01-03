#include <fstream>
using namespace std;
int main()
{
  int* ap = new int[10];
  for (int i = 0; i < 10; i++)
    ap[i] = 0;
  int* p10 = new int[10];
  for (int i = 0, p = 1; i < 10; p *= 10, i++)
    p10[i] = p;
  ifstream f("BAC.in");
  int x;
  while (f >> x)
  {
    for (int i = 0; i < 10; i++)
      if (x == p10[i])
        ap[i]++;
  }
  f.close();
  ofstream g("BAC.out");
  for (int i = 0; i < 10; i++)
    for (int j = 0; j < ap[i]; j++)
      g << p10[i] << ' ';
  g.close();
  return 0;
}

