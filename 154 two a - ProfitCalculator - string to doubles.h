/**
 * This is a skeleton for writing C++ contest solutions.
 */
 
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

// }}}

class ProfitCalculator
{
	public:

	int percent(vector <string> items){
	
	double tcost = 0;
	double trev = 0;
	double margin;
	double cost, rev;
	
	forni(items.size()){	//for each item
		rev = 0;
		cost = 0;
		rev = stod( items[i].substr(0, 6));	//takes first item
		cost = stod(items[i].substr(7, 6));
		
		tcost += cost;
		trev += rev;
	
	}

	margin = 100*(trev - tcost) / trev;		//calculates percentage margin
	
	return floor(margin);
	
	}
};




















