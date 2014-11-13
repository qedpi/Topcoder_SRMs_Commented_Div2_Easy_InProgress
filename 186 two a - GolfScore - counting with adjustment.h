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

class GolfScore
{
	public:
	int tally(vector <int> pv, vector <string> s)
	{
		int total = 0;
		int adj= 0;
		string t;
		forni(pv.size()){
			total += pv[i];					//normal score
			t = s[i];
			
			if (t == "triple bogey")		// adjustments
				adj = 3;
			if (t == "double bogey")
				adj = 2;
			if (t == "bogey")
				adj = 1;
			if (t == "par")
				adj = 0;
			if (t == "birdie")
				adj = -1;
			if (t == "eagle")
				adj = -2;
			if (t == "albatross")
				adj = -3;
			if (t == "hole in one")
				adj = -pv[i] + 1;
				
			total += adj;
		}
		
		return total;
	
	}
};




















