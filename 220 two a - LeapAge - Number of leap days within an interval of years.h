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

class LeapAge
{
public:
	int times(int a, int b, int n){	//finds out number of times n divides into numbers within the inclusive interval
			b -= b%n;
			a += (n-a)%n;

			if (a > b)
							return 0;
			else
							return ((b-a)/n +1);
	}	
	int getAge(int born, int year)
	{				
					/* inefficient way
					int total = 0;
					if (year != born)
					year++;
					while(year <= born){
									if (year%4 == 0 && !(year% 100 == 0 && year%400 != 0)){
													total ++;
									}
									year ++;
					}*/

					/* Efficient way for large inputs
					 *
					 */

					if (born == year)			
									year ++;
					else if (year > born)		//if beore birth, days are set to zero
									return 0;
					


													

		return (times(year, born, 4) - times(year, born, 100) + times(year, born, 400) - 1);	//inclusion exclusion on four, hundred, and four hundred
	}
};


















