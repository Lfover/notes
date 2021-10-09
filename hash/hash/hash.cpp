#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;


class hashtable()
{
	    const int L = 10;
		vector<string> ans;
		unordered_map<string, int> cnt;
		int n = s.length();
		for (int i = 0; i <= n - L; ++i) {
			string sub = s.substr(i, L);
			if (++cnt[sub] == 2) {
				ans.push_back(sub);
			}
		}
		return ans;
	}

void main()
{
	
	string s;
	cout << "ÇëÊäÈë×Ö·û´®" << endl;
	cin >> s;
	hashtable();

}
