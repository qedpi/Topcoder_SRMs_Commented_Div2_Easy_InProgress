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

class Justifier
{
	public:
	vector <string> justify(vector <string> s)
	{
		int max = 0;			//longest string
		int dif;
		string pad;				//left paddings of space
		forni(s.size()){				//determines longest
			if (max < s[i].length())
				max = s[i].length();
		}		
		
		forni(s.size()){
			pad = "";
			dif = max - s[i].length();	//amount of padding req
			forn(j, dif)
				pad += " ";
			s[i] = pad + s[i];			//pads it
		}
		
		return s;
		
	}
};




















