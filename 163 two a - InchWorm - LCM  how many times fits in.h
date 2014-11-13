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

class Inchworm
{
	public:
	int lunchtime(int branch, int rest, int leaf)
	{	
		int lcm = 1000001;		// inefficient but easy way to find lcm
		int store;
		
		fori(i, 0, 1000000){
			store = 1000000 - i;	//goes from million to 1 to find lcm
			if (store % rest == 0 && store % leaf ==0 ){
				lcm = store;	//finds a smaller common multiple
			}
		}
		
		return (branch / lcm + 1);	// amount of times lcm divides into length, offset by food at zeroth index
	
	}
};




















