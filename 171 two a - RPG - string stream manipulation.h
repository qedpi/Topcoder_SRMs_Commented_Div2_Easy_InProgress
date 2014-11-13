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

class RPG
{
	public:
	vector <int> dieRolls(vector <string> d)
	{
		vector <int> out(3, 0);
		stringstream s;
		double ave = 0;
		int first, second;
		
		forn(i, d.size()){
			first = 0;
			second = 0;
			s << d[i].substr(0, d[i].find('d')); //integer before d occurs
			s >> first;
			ssclr(s);				//clears stringstream
			s << d[i].substr(d[i].find('d')+1);	// integer after d occurs
			s >> second;
			ssclr(s);
			out[1] += first * second;		// max for each dice
			out[0] += first;				// min for each dice
			ave += first*double(second + 1) / 2;	//expected value, properties additive
		}	
		
		out[2] = floor(ave);
		return out;
	}
};




















