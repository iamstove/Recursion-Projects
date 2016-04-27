#include <iostream>
#include <ctime>
#include <math.h>
typedef long double ld;

ld tailfib(int n, ld a, ld b){
	if(n == 0){
		return a;
	}
	if(n ==1){
		return b;
	}

	return tailfib(n-1, b, a+b);
}

ld tailfact(int n, ld a){
	if(n == 0 || n == 1){
		return a;
	}
	return tailfact(n-1, a*n);
}


int main(){
	int n;
	ld tb, tf;
	double tb_time, tf_time;
	while (1) {
		std::cout.precision(5);
		std::cout << "Enter a non neg number pls: ";
		std::cin >> n;
		if(n >= 0){
			std::cout << std::scientific;
			//std::cout << std::fixed;
			int start = clock();
			tb = tailfib(n,0,1);
			int end  = clock();
			tb_time = (end - start)/double(CLOCKS_PER_SEC)*1000;
			start = clock();
			tf = tailfact(n,1);
			end  = clock();
			tf_time = (end - start)/double(CLOCKS_PER_SEC)*1000;
			if(!isinf(tb)){
				std::cout << "Fib result: " << tb << std::endl;
			} else {
				std::cout << "Fib result too large for a long double" << std::endl;
			}
			std::cout << std::fixed <<"Calculated in " << tb_time << " seconds" << std::scientific << std::endl;
			if(!isinf(tf)){
				std::cout << "Fact result: " << tf << std::endl;
			} else {
				std::cout << "Factorial result too large for a long double" << std::endl;
			}
			std::cout << std::fixed <<"Calculated in " << tf_time << " seconds" << std::scientific << std::endl;
		} else {
			break;
		}
	}
}
