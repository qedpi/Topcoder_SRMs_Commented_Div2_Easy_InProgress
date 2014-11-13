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
class CultureShock
{
public:
	string translate(string text)
	{
					string out;
					
					while(text != ""){				//if not empty
									if (text.find("ZEE") != string::npos){ //zee exists
													out += text.substr(0, text.find("ZEE")); //add the previous
													text = text.substr(text.find("ZEE"));	//cut it off
													
													if ( (out == "" || out[out.length() - 1] == ' ') && ( text.length() == 3 || text[3] == ' '))
																	out += "ZED";
													else
																	out += "ZEE";				
													text = text.substr(3);
									} else {
													out += text;
													return out;
									}
					}
	

		return out;
	}
};

















