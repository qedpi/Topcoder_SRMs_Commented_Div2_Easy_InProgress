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

class Chivalry
{
public:
	string getOrder(string first, string second)
	{
					string order;
					int fi = 0;		//index of strings
					int si = 0;
					
					while (fi < first.length() || si < second.length()){			//at least one string has not run out
									if (fi == first.length()){												// if first runs out, second line goes
													order += second[si];
													si ++;
									} else if (si == second.length()){								//if second runs, out first goes
													order += first[fi];
													fi ++;
									} else {																					//both strings working
									if (first[fi] == 'M' && second[si] == 'W'){				//only case where second line goes first is if first is male and second is female
													order += second[si];
													si++;
									} else 
										{
														order += first[fi];
														fi++;
										}
									}
					}

		return order;
	}
};




















