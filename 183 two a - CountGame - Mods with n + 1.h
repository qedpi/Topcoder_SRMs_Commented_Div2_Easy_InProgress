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

class CountGame
{
	public:
	int howMany(int maxAdd, int goal, int next)
	{
		goal -= next-1;
		if (goal % (maxAdd+1) == 0){ 		//on winning mod number, cannot win
			return -1;
		} else {
			//return ceil((double(goal) - next) / (maxAdd+1));	// you start and end, how many time you have to make a multiple of maxAdd+1
			return ( goal % (maxAdd+1) );
		}
	
	}
};




















