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

class PassingGrade
{
	public:
	int pointsNeeded(vector <int> pe, vector <int> pp, int f)
	{
	
		double total = f;
		double sofar = 0;
		double need = 0;
		
		forni(pe.size()){				//sum up points earned and total points
			total += pp[i];
			sofar += pe[i];
		}
		
		need = 65 * total / 100;		//number of total points to constitute percentage required
		need -= sofar;					//substract earned so far
		
		if (need > f)					//final cannot allow pass
			return -1;			
		else
			return max(int(ceil(need)), 0);	//return left over, or if negative, ie don't need any points, return 0
	
	}
};




















