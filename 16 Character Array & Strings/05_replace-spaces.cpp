// https://www.naukri.com/code360/problems/replace-spaces_1172172

#include <string>
#include <bits/stdc++.h> 
using namespace std;


string replaceSpaces(string &str){
	string str2;
	for ( int i = 0; i < str.size(); i++ ) {
		if( str[i] == ' ') {
			str2 += "@40";
		} else {
			char alpha = str[i];
			str2.push_back(alpha);
		}
	}

	return str2;
}