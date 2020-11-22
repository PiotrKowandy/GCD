#include "GCD.hpp"

#include <algorithm>

int GCD_Euclidean(int a, int b) {

	if (a == 0 || b == 0) return 0;
	while ( a % b != 0 ){
		int temp_b = b;
		b = a % b;
		a = temp_b;	 
	}
	return b;

}

int GCD_Euclidean_recur(int a, int b) {
	
	if (b == 0){ 
		return a;
	}
	return GCD_Euclidean_recur(b, a % b);

}

