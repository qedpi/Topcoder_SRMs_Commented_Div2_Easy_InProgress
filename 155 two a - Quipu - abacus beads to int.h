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

class Quipu
{
	public:
	int readKnots(string knots){
	int dig = 0;
	stringstream s;
	fori(i, 1, knots.length()){	//skip first index to estblash symmetry across all segments
		
		if(knots[i] == 'X'){		//is a bead
			dig ++;					// increase digit value
			continue;				//ignore others
		} else {
			s << dig;				//first slash, append digit
			dig = 0;				//reset
			i++;
		}
		
		while(knots[i] == '-'){		//if others still slash, append a zero
			s << "0";			
			i++;					
		}
		i--;						//for loop advances one too much
	}
	int out;
	s >> out;
	return out;
	
	}
};




















