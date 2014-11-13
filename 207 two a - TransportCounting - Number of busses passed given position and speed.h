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

class TransportCounting
{
public:
	int countBuses(int s, vector <int> p, vector <int> v, int t)
	{
					vector<double> r(p.size() + 1, 0);	//total distance after time
					r[p.size()] = s*t;	//your position at end
					double u = s*t;		//stores it

					FOR(i, 0, p.size()){			// takes final position of all
									r[i] += p[i] + v[i] * t;
					}

					int count = 0;						//number passed over
					FOR(i, 0, p.size())				
									if (u >= r[i] || p[i] == 0)		//either final position >=, or same initial position
													count ++;
					return count;
		
	}
};

















