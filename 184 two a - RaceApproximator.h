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

class RaceApproximator
{
	public:
	string timeToBeat(int d1, int t1, int d2, int t2, int d)
	{
		stringstream s;
		int sec;		//seconds
		
		sec = int(t1*exp( log(double(t2)/t1) * log (double(d1)/d) / log (double(d1)/d2) )); //using approx formula verbatim
		
		s << sec / 3600 << ':';			//conversion to time format
		sec %= 3600;
		if (sec / 60 < 10)				//leading zeros
			s << '0';
		s << sec / 60 << ':';
		sec %= 60;
		if (sec < 10)
			s << '0';
		s << sec;
	
		return s.str();
	}
};




















