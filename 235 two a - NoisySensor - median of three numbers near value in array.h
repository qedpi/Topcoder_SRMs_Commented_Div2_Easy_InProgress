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
class NoisySensor
{
public:
	vector <int> medianFilter(vector <int> data)
	{
					int sum = data[0];
					if (data.size() > 1)
									sum += data[1];

					vector <int> out(data.size(), 0);
					out[0] = data[0];
					out[out.size() - 1] = data[data.size() - 1];
					FOR(i, 1, data.size() - 1){	//I don't think it's easy to do it in place
									sum += data[i+1]; //add right value
									out[i] = sum - max(max(data[i], data[i - 1]), data[i + 1]) - min(min(data[i], data[i - 1]), data[i + 1]);//only middle value remains
									sum -= data[i - 1];	//saves calculation, destroys the left number, later in loop adds greater number (makes sure there is still one)
									

					}
		return out;
	}
};

