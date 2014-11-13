#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <fstream>
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
#define fori(i, a, b) for(int i=a; i<b; i++)
#define ssclr(s) {s.str(); s.clear();}
#define whiletrue while(true)
#define foreach(it, container) \nfor(typeof(container.begin()) it = container.begin(); it != container.end(); it++)	
using namespace std;
class InsideOut
{
public:
	string unscramble(string line)
	{
					string front;		//from middle to front
					string back;		//front back to midle
					FOR(i, 0, line.length()/2){				//number of operations for each string
									front += line[line.length()/2 -1 - i];
									back += line[line.length() - 1 - i];
					}
					front += back;	//append

				
		return (front);
	}
};

