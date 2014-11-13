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
class TextCompressor
{
public:
	string longestRepeat(string t)
	{
					//first go through possible lengths: longest possible is length/2, while shortest is one char. 
					int len = t.length()/2;
					string a;
					for (int i = len; i >= 1; i--){
									//go through possible starting positions, from zero, to t.length() - 2*length
									FOR(j, 0, t.length() - 2*i + 1){//offset
													a = t.substr(j, i); //take the string, see if it repeats
													if (t.substr(j + i).find(a) != string::npos){ //if found
																	return a;
													}

									}
					}

		return ""; //nothing is repeated
	}
};

