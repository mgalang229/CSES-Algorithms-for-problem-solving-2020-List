#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int n;
	cin >> n;
	if(n==2||n==3) {
		cout << "NO SOLUTION\n";
		return 0;
	}
	vector<int> v, v2;
	for(int i=1; i<=n; ++i) {
		if(i%2==0)
			v.push_back(i);
		else
			v2.push_back(i);
	}
	for(auto x : v)
		cout << x << " ";
	for(auto x : v2) 
		cout << x << " ";
	cout << "\n";
}
