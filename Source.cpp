#include <iostream>
using namespace std;

int main(){
	int i = 1;
	while (i <= 20)
	{

		if (i % 3 != 0 && i % 5 != 0){
			cout << i << endl;
		}

		else if (i % 3 == 0 && i % 5 == 0){
			cout << "FizzBuzz" << endl;
		}
		else if (i % 5 == 0){
			cout << "Fizz" << endl;
		}
		else if (i % 3 == 0){
			cout << "Buzz" << endl;
		}

		i++;
	}
}