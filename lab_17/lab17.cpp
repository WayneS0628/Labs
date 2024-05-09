#include <iostream>

using namespace std;

void Swap(double& num1, double& num2) {
	double temp;
	temp = num1;
	num1 = num2;
	num2 = temp;
}

int MaxIndex(double values[], int startIndex, int endIndex) {

	int indexOfMax = startIndex;
	for (int i = startIndex + 1; i < endIndex; i++)
		if (values[i] > values[indexOfMax])
			indexOfMax = i;

	return indexOfMax;
}

void SelectionSort(double values[], int numValues) {
	
	int endIndex = numValues - 1;
	for (int current = 0; current < endIndex; current++) {
		int maxIndex = MaxIndex(values, current, numValues);
		if (maxIndex != current)
			Swap(values[current], values[maxIndex]);
	}
}

int main() {

	double a[7] = { 19.99, 69.99, 59.99, 0, 20, -1, 39.99 };

	int s = 7;

	SelectionSort(a, s);

	for (auto& i : a)
		cout << i << endl;

	return 0;
}