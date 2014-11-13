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

class SkipRope
{
	public:
	vector <int> partners(vector <int> p, int h)
	{	
		/*vector <int> out(2, 0);
		sort (p.begin(), p.end());
		
		
		}
		forni(p.size()){
			if ( p[i]>= h ){			//first one equal or greater
				if ( i == 0 ){			// first is the desired
					forn(j, 2){
						out[j] = p[j];
					}
				}
				if ( (p[i] - h) <= (h - p[i-1]) ){ // higher one is closer
					out[0] = p[i];
				}	else {
					out[0] = p[i-1];
				}
				
				
			}
		}
		
		forni(2){
			out[i] = p[p.size()-1-i];
		}
		return out;*/
	
		vector <double> temp(p.size(), 0);		// easy sorting
		vector <int> out(2, 0);					// output
		forni(p.size()){
			temp[i] = p[i] - h;
			if (temp[i] < 0){	//shorter than height, so handicapped by extra 0.5
				temp[i] = 0.5 - temp[i];	// takes absolute value if negative
			}
		}
		
		sort (temp.begin(), temp.end());	//sort by adjusted height difference
		
		forni(2){
			if ( int((temp[i]*2)) % 2 == 1){	//if is a negative number, thus double is odd
				temp[i] = 0.5 - temp[i];		// restores value for < h
			}
			out [i] = temp[i] + h;	 		//restores usual height
		}
		if ( out[0] > out[1]){		//output specification, must be not decreasing
			int t = out[0];
			out[0] = out[1];
			out[1] = t;
		}
		return out;
	
	}
};




















