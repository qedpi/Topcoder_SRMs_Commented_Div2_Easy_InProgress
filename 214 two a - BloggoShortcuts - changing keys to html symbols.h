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

class bloggoShortcuts
{
public:
	string expand(string text)
	{
					string out;
					string temp;
					bool flag = false; //already in special text
					FOR(i, 0, text.length()){
									temp = "<";																			//scaffolding
									if (text[i] == '_' || text[i] == '*'){					//if special html brackets
													if (flag){					//is a closing bracket
																	temp += '/';
																	flag = false;
													} else {						//opening bracket
																	flag = true;
													}
													if (text[i] == '_') //italics
																	temp += 'i';
													else //bold
																	temp += 'b';
													temp += '>';
													out += temp;
									} else 				//normal char
													out += text[i];

									
					}

		return out;
	}
};



















