#include <iostream>
using namespace std;

int DecimalNum;
int num[6];

int main() {

	cout << "Please enter a decimal number to convert into binary form: " << endl;
	cin >> DecimalNum;


	  for (int i = 0; i < 6; i++) {
		num[i] = (DecimalNum % 2);
		DecimalNum = (DecimalNum / 2);
		
	}
	 for (int e = 0; e < 6; e++) {
		cout << num[e] << " ";
	}

	return 0;
}