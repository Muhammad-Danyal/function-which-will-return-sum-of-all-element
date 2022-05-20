#include<iostream>
using namespace std;

void sum();
int main() {
			sum();

	return 0;
}

void sum() {
int arr[5], sum = 0;

for (int i = 0; i < 5; i++) {
	cout << "arr[" << i << "]=";
	cin >> arr[i];
	sum = sum + arr[i];
}
cout << "the sum of elements =" << sum;
}