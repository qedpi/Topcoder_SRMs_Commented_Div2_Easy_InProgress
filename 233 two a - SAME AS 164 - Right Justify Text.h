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
class JustifyText
{
public:
	vector <string> format(vector <string> text)
	{
					int max = -1;
					string pad = "";

					FOR(i, 0, 51){
									pad += ' ';
					}
					FOR(i, 0, text.size()){
									if (text[i].length() > max)
													max = text[i].length();
									text[i] = pad + text[i];
					}
					FOR(i, 0, text.size()){
									text[i] = text[i].substr(text[i].length() - max);
					}
		return text;
	}
};

