#pragma once
#include <iostream>
using namespace std;

class Array
{
	int size, len, * items;
	//-> Operations
	Array(int arraySize){
		size = arraySize;
		len = 0;
		items = new int[arraySize];
	}
	int getSize() { return size;}
	int getLen() { return len;}
	void fill(int noFillItems) {
		for (int i = 0; i < noFillItems; i++) {
			int item;
			cin >> item;
			items[i] = item;
		}
	}
	void display() {
		for (int i = 0; i < len; i++) {
			cout << items[i] << "\t";
		}cout << "\n";
	}

};

