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

class EyeDrops
{
	public:
	double closest(int sleepTime, int k)
	{
		double awake = 1440.0 - sleepTime*60;		//minutes awake
		double space;								//current spacing
		if (k > 1){									//if more than once
			space = awake / (k-1);			//dist between k poles
		} else {			
			space = INT_MAX;				
		}	
		if (sleepTime*60 < space)//dist bet last and first of next day less than spacing
			space = 1440.0 / k;	//since sleep time less than gap, dividing total by one more decreases each,
			// ie, 2, 2, 2, 1, then 3*2 / 3 > 7 / 4
		
		return space;
	
	}
};




















