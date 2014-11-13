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

#define whiletrue while(true)

#define foreach(it, container) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)	

#define MAX 1000
using namespace std;

class Swimmers
{
	public:
	vector <int> getSwimTimes(vector <int> d, vector <int> s, int cur)
	{
	
		vector <int> t (d.size(), -1);		//set default to impossible
		
	
		forni(d.size()){		// go thru swimmers
			if (s[i] > cur){	// if swims faster than current
				t[i] = floor(double(d[i]) / (s[i] + cur) + double(d[i]) / (s[i] - cur));
			} 			// adds up time with and against current
			if (d[i] == 0)		// if there is no distance to swim
				t[i] = 0;
		}
		
		return t;
	}
};




















