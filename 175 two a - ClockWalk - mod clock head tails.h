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

#define whiletrue while(true)

#define foreach(it, container) \
    for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)	

#define MAX 1000
using namespace std;

class ClockWalk
{
	public:
	int finalPosition(string flips)
	{
		int init = 0;
		
		forni(flips.length()){
			if (flips[i] == 'h'){
				init += i + 1;		//heads, move forwards 
			} else {
				init -= i + 1;		//vice versa
			}
		}
		init = (init%12 + 12)% 12;	//modding it by twelve since clock is base 12 hour system
		
		if (init == 0) 				//easier to use mod if 12 is represented by zero
			init = 12;
		
		return init;
	
	}
};




















