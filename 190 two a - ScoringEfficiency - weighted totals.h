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


class ScoringEfficiency
{
public:
	double getPointsPerShot(vector <string> g)
	{
					int p = 0;		//points total 
					double ta = 0;	//attemps total
					double a;			//current attempt
					int m;	//points made 
					FOR(i, 0, g.size()){					///first, check which throw it is
									if (g[i].find('2') != string::npos){ //two pointer
													m = 2;
													a = 1;
									} else if (g[i].find('3') != string::npos){ //three points
													m = 3;
													a = 1;
									} else {			//free throw
													m = 1;
													a = 0.5;
									}
											// now check whether hit or missed
									if (g[i][1] == 'i'){ //missed
													m *= 0;
									}

									p += m;
									ta += a;
					}



									

													
		return (p/ta);
	}
};


















