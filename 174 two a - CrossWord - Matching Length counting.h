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

class CrossWord
{
	public:
	int countWords(vector <string> board, int size)
	{
		int count;						//length of word so far
		int sum = 0;					//total desired words of length size
		
		forni(board.size()){
			count = 0;
			forn(j,board[0].length()){	//traverses thru each char
				if (board[i][j] == '.'){	//is word part
					count ++;
				} else {					//is stopping
					if (count == size){		//is right length
						sum ++;
					}
					count = 0;
				}
			}
			if (count == size)				//check if word ends at string's ending
				sum ++;
		}
	
		return sum;
	}
};




















