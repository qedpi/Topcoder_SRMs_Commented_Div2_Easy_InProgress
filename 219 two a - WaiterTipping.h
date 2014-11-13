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

class WaiterTipping
{
public:
	int maxPercent(int p, int t, int m)
	{
					double pay = p;
					pay += floor(double(t)*p/100);			//add taxes

					double tip;								//find money left after
					tip = m - pay;
					tip = floor((tip * 100) / p);	//tip amount
					if (floor(pay + (tip + 1)*p/100) <= m)//see if off by one because of floor conditions (opposite of floor is ceil, but there is a rounding catch)
									tip++;
					if (tip < 0)		//not possible
									return -1;

		return int(tip);
	}
}




















