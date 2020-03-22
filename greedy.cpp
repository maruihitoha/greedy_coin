#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {

	int total = 100;
	int coins[6] = { 55, 22, 15, 10, 7, 1 };
	int numArr[6] = {0};

	for (int i = 0; i < 6; i++) 
	{
		if (total >= coins[i] ) 
		{
			numArr[i] = total / coins[i];
			total = total % coins[i];
		}
		else 
		{
			continue;
		}
	}

	cout << "100원을 거슬러보자 :" << endl;

	for (int i = 0; i < 6; i++) 
	{
		cout << coins[i] << " : " << numArr[i] << " 개 " << endl;
	}
}