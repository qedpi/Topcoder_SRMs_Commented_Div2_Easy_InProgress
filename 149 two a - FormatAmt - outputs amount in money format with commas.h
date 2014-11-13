/**
 * This is a skeleton for writing C++ contest solutions.
 */
 
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

// }}}

class FormatAmt
{
	public:
	
	string amount(int d, int c){
	
	stringstream out;
	string reverse;	
	int count = 0;
	
	if (d != 0){			//if there are dollars
		while (d != 0){		//there are still digits to work with
			if (count %3 == 0 && count != 0){	//if digits are multiple of three, and not the first digit
				out << ',';
			}
			out << d%10;	//takes last digit, and removes it from d
			d/=10;			
			count ++;		//mod three counter
		}
		
		reverse = out.str();	//stores current result in reverse, and clears stringstream
		out.str("");
		out << "$";
		
		forni(reverse.length()){		//reverses string
			out << reverse[reverse.length() - i - 1];
		}
	} else {		//if no dollars, put 0 dollars
		out << "$0";
	}
	
	out << ".";
	
	if (c < 10)		//if only one digit, add an extra zero in front
		out << "0";
	out << c;
	
	return out.str();

	
	
	
	
	
	}
};

