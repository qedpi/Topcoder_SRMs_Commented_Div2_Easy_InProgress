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

class Education
{
public:
	int minimize(string g, vector <int> t)
	{
					double total = 0;								//number of points accrude
					double p = (t.size() + 1) * 100;//all possible points

					FOR(i, 0, t.size()){
									total += t[i];
					}

					int need = 60 + ('D' - g[0])*10;
					p = need* (t.size() + 1);		//total needed points

					if (p <= total)		//grades good enough
									return 0;
					else if (p - total > 100)	//impossible
									return - 1;
					else 
									return (p - total);

					


		return int();
	}
};




















