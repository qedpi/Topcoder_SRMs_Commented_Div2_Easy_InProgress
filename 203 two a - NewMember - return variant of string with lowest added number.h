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

class UserName
{
public:
	string newMember(vector <string> d, string n)
	{
					int v = 0;
					stringstream s;
					string temp;
					vector <bool> avail(51, true);			//each is avail or not, with zero being the original name
					
					FOR(i, 0, d.size()){								//traverses database array
									if (n == d[i]){							//if orig name matches
													avail[0] = false;
									}
									else if (d[i].substr(0, n.length()) == n){		//if name part found
												temp = d[i].substr(n.length());					//take the later part
												if (temp[0] != '0'){										//first char must not be zero
																FOR(j, 0, temp.length()){				//go thru num's chars, make sure they are nums
																				if (temp[j] >= '0' && temp[j] <= '9')
																								v += 0;
																				else
																								goto next;		//if not, go to next string
																}
												s << d[i].substr(n.length());					//make the bool false for that instance of num
												s >> v;
												s.str("");
												s.clear();
												avail[v] = false;
												}
									}
									next:;
					}
					if (avail[0])				//orinigal name avail
									return n;
					FOR(i, 1, 51){			//go use first avail name with num of replicate, the input spec ensures that bool array is of sufficient size
									if (avail[i]){
													s << n;
													s << i;
													return s.str();
									} 




					}
					return "";
	}
};





















