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

class DiskSpace
{
	public:
	int minDrives(vector <int> used, vector <int> total){
	
		int t = 0;
		
		forni(used.size()){		//add up total space used.
			t += used[i];
		}
		
		sort(total.begin(), total.end());	//smallest to largest
		
		forni(total.size()){				//subtract the capacity from the largest ones
			t -= total[total.size()-1-i]; 
			if (t <= 0){					//no more data left
				return (i + 1);				//amount of space used, but offset by 1 since i starts at 0
				break;
			}
		}
	
		return 0;
	
	}
};




















