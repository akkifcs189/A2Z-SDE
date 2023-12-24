//Question link - https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720

// int sumOfDivisors(int n) {
// 	int sum = 0;
// 	for(int i = 1; i*i <= n; i++) {
// 		if(n % i == 0) {
// 			sum += i;
// 			if(n/i != i) {
// 				sum += n/i;
// 			}
// 		}
// 	}
// 	return sum;
// }

// int sumOfAllDivisors(int n){
// 	int sum = 0;
// 	for(int i = 1; i <= n; i++) {
// 		sum += sumOfDivisors(i);
// 	}
// 	return sum;
// }
int sumOfAllDivisors(int n){

    int sum=0;

    for(int i=1;i<=n;i++){ 

        sum+=(n/i)*i; //sum = 21

    }

    return sum;

}