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
class Highscore
{
public:
	int getRank(vector <int> s, int ns, int p)
	{
					//we count how many are greater than us, and are equal to us. 
					int greater = 0;
					int equals = 0;

					FOR(i, 0, s.size()){
									if (s[i] > ns)
													greater ++;
									else if (s[i] == ns)
													equals++;

					}

					//if new score doesn't make the score broad
					if (greater + equals >= p)
									return -1;
					else //if these's a spot available, then the rank would equal to the number of scores above ours, offset by 1 (highest score has value of 1)
									return greater+1;
													
		return int();
	}
};

















