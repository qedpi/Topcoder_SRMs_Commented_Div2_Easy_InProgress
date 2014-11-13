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

class GardenHose
{
public:
	int countDead(int n, int rowDist, int colDist, int hoseDist)
	{
					int count = (n + 1) / 2;	//symmetry abstraction
					int extra = n%2;		// whether odd or even
					int dr, dc;		//dead rows and cols

					
					dr = hoseDist / (rowDist); //amount of reachable ones
					dc = hoseDist / (colDist);
					dr = count - dr;						//un reachable ones
					dc = count - dc;
					dr = dr*2 - extra;					//if odd, don't double
					dc = dc *2 - extra;
		return (max(dr, 0)*max(dc, 0));
	}
};





















