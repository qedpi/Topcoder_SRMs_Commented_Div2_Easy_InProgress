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

class Medici
{
public:
	int winner(vector <int> fame, vector <int> fortune, vector <int> secrets)
	{
					int p = 0; //best player so far
					int w = -1;// current max of value of weakest element
					int t; // challenger's value
					bool flag = false;				//the max at the end is not repeated
					FOR(i, 0, fame.size()){
									t = min(min(fame[i], fortune[i]), secrets[i]);
									if (w < t){
													w = t;
													p = i;
													flag = false;			//reset the max, as new max achieved
									} else if (w == t)
													flag = true;		//max is repeated for now
					}

					if (flag)						//two of max, draw!
									return -1;
					return p;
		return -1;
	}
};


















