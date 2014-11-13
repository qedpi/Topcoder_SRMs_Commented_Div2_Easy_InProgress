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

class Stairs
{
	public:
	int designs(int maxh, int minw, int th, int tw)
	{
		int out = 0;
		
		fori(i, minw, tw+1){		//varies tread width
			if (tw % i == 0){	// number of flats divides into whole length
				if (th%(tw/i + 1) == 0 && th/(tw/i+1) <= maxh){	//if heights divide into total
					out ++;	//take one more than fits in width, divide th by such to check if fits
				}
				
			}
		}
		
		return out;
	
	}
};




















