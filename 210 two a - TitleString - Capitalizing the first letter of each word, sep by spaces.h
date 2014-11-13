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

class TitleString
{
public:
	string toFirstUpperCase(string title)
	{
					string out;			// string with each word capp'd
					FOR(i, 0, title.length()){
									if (title[i] == ' ')		//space, then addpend
													out += title[i];
									else if (i == 0)	// not space, but first char, append to avoid seg fault
													out += char(title[i] - abs('A' - 'a'));
									else if (title[i - 1] == ' ')		//not space, but after a space, then shuld be capp'd
											out += char(title[i] - abs('A' - 'a'));
									else		//letter not at front of word, leave as 
												out += title[i];
					}
		return out;
	}
};




















