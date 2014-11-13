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

class TireRotation
{
	public:
	int getCycle(string initial, string current){
		int pos = 1;
		string test;
		
		if (initial == current)		//rite rite away
			return pos;
			
		test = initial;
		string next;
		
		forn (i, 4){
			next = "";				// reset and rotate
			next += test[3];
			next += test[2];
			next += test[0];
			next += test[1];
			test = next;
			pos ++;					// increase rotations recorded
			
			if (test == current)
				return pos;
		}
		
		/*forni(initial.length()){
			if (initial[0] == current[i]){
				if (i == 1)
					pos = i+1;
				else if (i == 2)
					pos = i-1;
				else
					pos = i;
			}
				
		}*/
	
	
		return -1;
	}
};




















