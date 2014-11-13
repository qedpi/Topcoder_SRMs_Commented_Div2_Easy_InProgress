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

bool istri(int a, int b, int c){
	return (a+b>c);
}

class Workshop
{
	public:
	int pictureFrames(vector <int> pieces)
	{	
		int sum = 0;			// num triangles
		int a, b, c;			// side lengths
		int leng = pieces.size();
		fori(i, 0,leng){
			fori(j, i+1, leng){
				fori(k, j+1, leng){		// check all possible combinations of three
					a = pieces[i];
					b = pieces[j];
					c = pieces[k];
					if (istri(a, b, c) && istri(b, c, a) && istri(c, a ,b)) 
						sum++;	//satisfies triangle inequalities
				}
			}
		}
	return sum;
	
	}
};




















