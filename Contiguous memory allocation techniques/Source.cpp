#include<iostream>
using namespace std;

void first_fit(int arr[], int size1, int arr2[], int size2) {
	int temp = 0;
	for (int i = 0; i < size2; i++)
		for (int j = 0; j < size1; j++) {
			if (arr2[i] <= arr[j]) {
				temp = arr[j];
				arr[j] -= arr2[i];
				cout << arr2[i] << "KB will fit in memory " << temp << "KB, so it will become " << arr[j] << "KB." << endl;
				j = size2;
			}
		}
}

void best_fit(int arr[], int size1, int arr2[], int size2) {
	//Yet to impliment
}

void worst_fit(int arr[], int size1, int arr2[], int size2) {
	//Yet to impliment
}

int main() {
	int mem_size = 6;
	int p_size = 5;
	int mem_location[6] = { 300, 600, 350, 200, 750, 125 };
	int process[5] = { 115, 500, 358, 200, 375 };
	cout << "First Fit:" << endl;
	first_fit(mem_location, mem_size, process, p_size);
	cout << endl;
	/*
	cout << "Best Fit:" << endl;
	best_fit(mem_location, mem_size, process, p_size);
	cout << endl;
	cout << "Worst Fit:" << endl;
	worst_fit(mem_location, mem_size, process, p_size);
	cout << endl;
	*/
	system("pause");
	return 0;
}