#include<iostream>
#include<cstdlib>

using namespace std;

const int VOLUME_MAX = 100;

void Input(int arr[],int size) {
	cout << "Please enter your array in order:";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
}
//BubbleSort Algorithm(ÉýÐò);
void BubbleSort(int arr[],int size) {
	int temp;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "New order is:";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
}