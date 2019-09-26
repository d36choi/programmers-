#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

bool comp(string a, string b) {
	return a + b > b + a ? true : false;
}
string solution(vector<int> numbers) {
	vector <string> arr;
	string answer = "";
	for (int i = 0; i < numbers.size(); i++) {
		arr.push_back(to_string(numbers.at(i)));
	}
	sort(arr.begin(), arr.end(), comp);
	for (string str : arr) {
		answer += str;
	}
	if (answer[0] == '0') {
		return "0";
	}
	return answer;
}
