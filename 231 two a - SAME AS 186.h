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
class GolfScore
{
	public:
	int tally(vector <int> pv, vector <string> s)
	{
		int total = 0;
		int adj= 0;
		string t;
		FOR(i, 0,pv.size()){
			total += pv[i];					//normal score
			t = s[i];
			
			if (t == "triple bogey")		// adjustments
				adj = 3;
			if (t == "double bogey")
				adj = 2;
			if (t == "bogey")
				adj = 1;
			if (t == "par")
				adj = 0;
			if (t == "birdie")
				adj = -1;
			if (t == "eagle")
				adj = -2;
			if (t == "albatross")
				adj = -3;
			if (t == "hole in one")
				adj = -pv[i] + 1;
				
			total += adj;
		}
		
		return total;
	
	}
};
