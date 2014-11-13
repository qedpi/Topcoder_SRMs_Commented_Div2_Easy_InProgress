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
class VLNString
{
public:
	string makeAcronym(string w)
	{
					string out;		//abbreviation, beginning of formal words
					string word;	//check each word before abbreviating
					FOR(i, 0, w.length()){		//traverse thru string
									
									if (w[i] != ' ' && (i==0 || w[i-1] == ' ')){	//start of new word, either very beginning, or 
													while (w[i] != ' ' && i < w.length()){
																	word += w[i];		//add char to word
																	i++;
													}
													if (word != "and" && word != "of" && word != "the"){	//if formal word
																	out += char(word[0]  + ('A' - 'a'));					//capitalize first letter
													} 
													word = "";		//reset
									}
					}


		return out;
	}
};