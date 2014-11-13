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

class MagicSquare
{
public:
	int missing(vector <int> square)
	{
					vector <int> row;				//store each row for easier sort manipulation
					int sum = 0;
					FOR(i, 0, square.size()){		//goes thru square
									sum += square[i];	//adds to row sum
									if (i%3 == 2){		//end of row
													row.push_back(sum);	//store and reset
													sum = 0;
									}

					}

					sort(row.begin(), row.end());		//one with missing num has lowest sum, other have same

					
		return (row[1] - row [0] - 1);		//take difference, taking into acocunt -1 makes dif one more than actually.
	
	}
};





















