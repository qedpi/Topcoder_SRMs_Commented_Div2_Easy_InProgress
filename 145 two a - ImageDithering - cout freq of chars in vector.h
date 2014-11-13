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

class ImageDithering
{
	public:
	int count(string dith, vector <string> grid){
		vector<int> count(26, 0);		//freq of chars
		int sum =0;			//total of all chars desired
		forn(i, grid.size()){
			forn(j, grid[i].length()){
				count[grid[i][j] - 'A'] ++;		// go thru each letter, add to letter freq
			}
		}
		
		forni(dith.length()){					//for each unique char desired, add its freq
			sum += count[dith[i]-'A'];
		}
		
		return sum;
	}
};

