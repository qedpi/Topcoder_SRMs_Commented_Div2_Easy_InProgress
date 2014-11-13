/** This is a skeleton for writing C++ contest solutions.*/
 
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

class StreetParking
{
	public:

	int freeParks(string street){
		int s = street.length();
		int count = 0;
		forni(s){
			if (street[i] == '-'){			// if is a street
				if ( i >= s-1 || (street[i+1] != 'B' && street[i+1] != 'S' )){	//nothing in front
					if ( i == 0 || street[i-1] != 'S'){			// nothing behind
						if ( i >= s-2 || street[i+2] != 'B' ){	//nothing two spaces in front
							count ++;
						}
					}
				}
			}
		}
	
		return count;
	}
};




















