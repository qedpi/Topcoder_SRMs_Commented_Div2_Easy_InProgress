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
class SignatureDecorator
{
public:
	string applyDecoration(string n, vector <string> c, vector <string> d)
	{
					FOR(i, 0, c.size()){ //for each command
									if (c[i] == "prepend"){
													n = d[i] + n;
									} else if (c[i] == "append"){
													n = n + d[i];
									} else {
													n = d[i] + n;
													FOR(j, 0, d[i].size()){
																	n+= d[i][d[i].size() - j - 1];
													}
													
									}
					}
					//n = '"' + n;
					//n+= '"';
					string out = n;
		return out;
	}
};

