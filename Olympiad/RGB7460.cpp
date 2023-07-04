#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int,int> &a, const pair<int,int> &b){
    return (a.second < b.second);
}

int main(){
	int n;
	cin >> n;
	int arr[n][n], a[n];
	vector<pair<int,int> > vec;
	for(int i = 0; i < n; ++i)
		a[i] = 0;
	for(int i = 0; i < n; ++i){
		for(int j = 0; j < n; ++j){
			cin >> arr[i][j];
			a[i]+=arr[i][j];
		}
		vec.push_back(make_pair (a[i], i));
	}
	sort(vec.begin(), vec.end());
	sort(vec.begin(), vec.begin() + 3, sortbysec);
	for (int i = 0 ; i < 3; i++)
    	cout << vec[i].second + 1 << " ";
	return 0;
}
