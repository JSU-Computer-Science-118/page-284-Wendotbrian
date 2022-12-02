// write your code here
//Brian Koringo #j00962107
//Number guessing pg. 284
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
  int num;
  int guess;
  int p, n;
  
  unsigned seed;
  seed=time(0);
  p=1;
  cin >> n;
  
  while (p<=n)
  {
  srand(seed);
  num=rand()%100;   
  cout << num << " ";
  p++;
  seed=p; 
  }
  
  return 0;
  }
