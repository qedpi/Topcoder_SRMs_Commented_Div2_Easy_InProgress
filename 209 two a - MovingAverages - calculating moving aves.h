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

class MovingAverages
{
public:

	int conv(string t){			//converting from hh:mm:ss format to seconds
					stringstream s;
					int sec = 0;
					s << t.substr(0,2);
					int x;
					s >> x;
					sec += 3600*x;
					s.str("");
					s.clear();
					s << t.substr(3, 2);
					s >> x;
					sec += 60*x;
					s.str("");
					s.clear();
					s << t.substr(6, 2);
					s >> x;
					sec += x;

					return sec;

	}
	vector <int> calculate(vector <string> times, int n)
	{
					int e = times.size() - n + 1;			//number of moving aves to be calculated
					vector <int> tins(e, 0);					//vector containing movinaverages

					FOR(i, 0, e){											//traverse, calculate for each
									FOR(j, 0, n){							//add the seconds
													tins[i] += conv(times[i + j]);
									}
									tins[i] /= n;							//divide to fnd int average 
					}

		return tins;
	}
};

















