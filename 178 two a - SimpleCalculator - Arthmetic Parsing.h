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

class SimpleCalculator
{
	public:
	int calculate(string input)
	{
	
		int a = 0;
		int b = 0;
		bool first = true;
		
		int leng = input.length();
		forni(leng){				// traverse through chars
			if (first){				//on first num
				if (input[i] == '-' || input[i] == '+' || input[i] == '*' || input[i] == '/'){
					input = input + input[i];
					first = false;
				} else {			//second num
					a*= 10;
					a+= input[i] - '0';}
			}	else {
				b*= 10;
				b+= input[i] - '0';
			}
		}
		
		switch(input[leng]){
			case '-':
				a-=b;
				return a;
				break;
			case '+':
				a+=b;
				return a;
				break;
			case '*':
				a*= b;
				return a;
				break;
			case '/':
				a/=b;
				return a;
				break;
				
		}
	return 0;
	}
};
	



















