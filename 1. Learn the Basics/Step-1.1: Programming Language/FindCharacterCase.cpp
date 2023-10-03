//https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char input;
	cin >> input;

	if(input >= 'A' && input <= 'Z') {
		cout << 1;
	} else if(input >= 'a' && input <= 'z') {
		cout << 0;
	} else {
		cout << -1;
	}
	
}
