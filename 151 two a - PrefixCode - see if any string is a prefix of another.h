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

class PrefixCode
{
	public:
	string isOne(vector <string> words){
	
	bool flag = true; // is prefix code
	int ind = 0; // first occurence of non prefix string 
	
	forn(i, words.size()){		//word that could be prefix
		forn(j, words.size()){	//see if prefix of anyother, not itself
			if (i != j){
				if(words[i] == words[j].substr(0, words[i].length())){	//matching prefix found, sets flag to false
					flag = false;	
					ind = i;
					goto here;		//abort
				}
			}
		}
	}
	
	here:;
	
	
	
	stringstream s;			// flag dependent output
	if (flag){
		s << "Yes";
	} else {
		s << "No, " << ind;
	}
	return s.str();
	
	}
};

















