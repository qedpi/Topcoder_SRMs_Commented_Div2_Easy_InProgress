#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits.h>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <queue>
#include <utility>
#include <vector>
#define fori(i, a, b) for(int i=a; i<b; i++)
#define ssclr(s) {s.str(); s.clear();}
#define whiletrue while(true)
#define foreach(it, container) \nfor(typeof(container.begin()) it = container.begin(); it != container.end(); it++)	
using namespace std;
class InequalityChecker
{
public:
	vector <int> getDifferences(int n)
	{
					int csum = 0; //cube sums
					vector <int> reduced(2,0);

					FOR(i, 1, n){ //add n cubed
									csum += i*i*i;
					}

					//denominator
					reduced[1] = 4;
					//numerator
					reduced[0] = 4*csum + 2*n*n*n - n*n*n*n;

					while (reduced[1] != 1 && reduced[0] % reduced[1] == 0) { //not in lowest terms
									reduced[0]/=2;
									reduced[1]/=2;
					}
		return reduced;
	}
};

