int countDigits(int n){
	int local_n = n;
	int count = 0;
	while(local_n > 0) {
		int lastdigit = local_n % 10;
		if(lastdigit > 0 && n % lastdigit == 0) count++;
		local_n /= 10;
	}	
	return count;
}