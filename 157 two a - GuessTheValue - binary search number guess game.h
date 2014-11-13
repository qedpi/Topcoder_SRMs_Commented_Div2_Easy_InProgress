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

class GuessTheNumber
{
	public:

	int noGuesses(int upper, int answer){
		int low = 1;
		int up = upper;
		int x;
		int count = 1;
		
		while (true){
			x = (low + up)/2;		// guess middle value
			
			if (x==answer)			
				return count;
			else if ( x > answer ){	//set upper bound lower than guess
				up = x - 1;
			} else {
				low = x + 1;		//set lower bound higher than guess
			}
			
			count ++;
			
			
		}
	
	
		return 0;
	}
};




















