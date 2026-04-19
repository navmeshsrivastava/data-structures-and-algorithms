// https://www.naukri.com/code360/problems/subsequences-of-string_985087?leftPanelTab=0&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_16

#include <bits/stdc++.h> 
#include <vector>
using namespace std;

void solve( string str, string output, int i, vector<string> &ans) {
	if(i>=str.size()) {
		if(output.length() > 0 ) {
			ans.push_back(output);
			return;
		}
		return;
	}

	solve(str,output,i+1, ans);
	char element = str[i];
	output.push_back(element);
	solve(str, output, i+1, ans);


}
vector<string> subsequences(string str){
	
	vector<string> ans;
	string output ="";

	solve( str, output, 0, ans);
	return ans;
	
}
