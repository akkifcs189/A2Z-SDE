int countDigits(int n){
	int localn = n;
	int count = 0;
	while(localn > 0) {
		int lastdigit = localn % 10;
		count++;
		localn /= 10;
	}	
	return count;
}

bool checkArmstrong(int n){
	int digits = countDigits(n);
	int dup = n;
	int sum = 0;
	while(n > 0) {
		int ld = n % 10;
		sum = sum + pow(ld, digits);
		n = n / 10;
	}
	return sum == dup;
}
