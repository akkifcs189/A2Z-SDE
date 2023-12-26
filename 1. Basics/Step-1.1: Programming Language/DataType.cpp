//https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

//Notes:
//Don't use "Switch" statement if the cases are of type "String" in C++

int dataTypes(string type) {
	// Write your code here
	int ans = 0;
	if(type == "Integer" || type == "Float") {
		return 4;
	} else if(type == "Long" || type == "Double") {
		return 8;
	} else return 1;
}
