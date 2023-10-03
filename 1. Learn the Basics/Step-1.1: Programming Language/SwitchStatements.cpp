//https://www.codingninjas.com/studio/problems/switch-case-statement_8357244?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

//Notes:
//"#include <cmath>" header has  "M_PI" constant for value of PI

double areaSwitchCase(int ch, vector<double> a) {
	// Write your code here
	double ans = 0.0;
	switch(ch) {
		case 1:
			ans = M_PI * a[0] * a[0];
			break;
		case 2:
			ans = a[0] * a[1];
			break;
		default:
			ans = 0;
			break;
	}
	return ans;
}
