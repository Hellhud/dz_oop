#include <iostream>
#include <cmath>
class chisla{
public:
	float a=0;//число
	float b=0;//степень 
};
struct result {
	chisla chisla;
	float  set(float a, float b){
		std::cout << "vvedite chislo:" << std::endl;
		std::cin >> a;
		chisla.a = a;
		std::cout << "vvedite ctepen vozvedenia:" << std::endl;
		std::cin >> b;
		chisla.b = b;
		return 0;
	}
	float calculate(float a , float b) {
		std::cout << "result:" << std::endl;
		std::cout << pow(chisla.a, chisla.b);
		return a;
	}
};
int main(){
	chisla chisla;
	result r;
	r.set(chisla.a, chisla.b);
	r.calculate(chisla.a, chisla.b);
	return 0;
}