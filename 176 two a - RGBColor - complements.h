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

class RGBColor
{
	public:
	vector <int> getComplement(vector <int> rgb)
	{
		int temp;
		forni(3){							//if at least one component is sig dif
			temp = 255 - rgb[i];
			if (abs(temp - rgb[i]) > 32){
				forn(j, 3){					//set the normal complement
					rgb[j] = 255 - rgb[j];
				}
				return rgb;
			}
		}
		
		forni(3){							//all are too close, use radical procedure
			if (rgb[i] + 128 <= 255){
				rgb[i]+= 128;
			} else
				rgb[i]-= 128;
		}

		return rgb;
	}
};




















