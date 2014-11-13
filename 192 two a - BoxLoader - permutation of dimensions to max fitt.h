/* This is a skeleton for writing C++ contest solutions.*/
 
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
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

//macros
#define si(t) scanf("%d", &t)
#define sd(t) scanf("%f", &t)

#define fori(i, a, b) for(int i=a; i<b; i++)
#define ford(i, a, b) for(int i=a; i>b; i--)
#define forn(i, n) for(int i=0; i < n; i++)
#define forni(n) for(int i = 0; i < n; i++)
#define forsize(ar) for(int i=0; i < ar.size(); i++)

#define ssclr(s) {s.str(""); s.clear();}

#define whiletrue while(true)

#define foreach(it, container) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)	

#define MAX 1000
using namespace std;

class BoxLoader
{
public:
	int mostItems(int tx, int ty, int tz, int x, int y, int z)
	{
					int max = 0;						//max objects fitted so far
					vector<int> orient;			//store dimensions of box in vector for easy permutation
					orient.push_back(x);
					orient.push_back(y);
					orient.push_back(z);
					int num;
					FOR(i, 0, 6){						//see how many of each side fits, since they are multiplicative, then permute the dimensions
									num = (tx/orient[0])*(ty/orient[1])*(tz/orient[2]);
									if (num > max)
													max = num;
									next_permutation(orient.begin(), orient.end());
					}
		return max;
	}
};












