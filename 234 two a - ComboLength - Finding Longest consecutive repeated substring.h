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
class ComboLength
{
public:
	int howLong(string moves)
	{
	int m = 0; //max combo length for each
	int count = 0;	//combo so far
	char cur = moves[0]; //current player
	
	FOR(i, 0, moves.length()){
		if (moves[i] == cur)	//still current player
			count ++;
		 else {		//switches players
			cur = moves[i];
			if (count > m)	//new max
				m = count;
			count = 1;
		}
	}

	
	return max(m, count);//could have never switched players
	}
};

