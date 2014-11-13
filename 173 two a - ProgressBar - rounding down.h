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

class ProgressBar
{
	public:
	string showProgress(vector <int> tts, int comp)
	{
		int perc;
		int done = 0;
		int total = 0;
		
		forni(tts.size()){
			if (i < comp){			//projects done
				done += tts[i];
			} 
			total += tts[i];
		}
		perc = floor(20* double(done) / total); //twenty symbols in total
		string out;
		
		forni(perc){
			out += '#';
		} 
		forni(20-perc){		//the rest
			out += '.';
		}
		
		return out;
	}
};




















