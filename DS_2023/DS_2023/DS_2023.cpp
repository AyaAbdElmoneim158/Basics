//#include "Array.h"
#include <iostream>
using namespace std;
class Array
{
private:
	int size, len, * items;
public:
	//-> Operations
	Array(int arraySize) {
		size = arraySize;
		len = 0;
		items = new int[arraySize];
	}
	int getSize() { return size; }
	int getLen() { return len; }

	void fill() {
		int noFillItems;
		cout << "Enter Items you want Fill!\n";
		cin >> noFillItems;
		for (int i = 0; i < noFillItems; i++) {
			int item;
			cout << "Enter Item no:"<< i<<"\n";
			cin >> item;
			items[i] = item;
			len++;
		}
	}
	void display() {
		cout << "Items of Array!\n";
		for (int i = 0; i < len; i++) {
			cout << items[i] << "\t";
		}cout << "\n";
	}
	void appand(int newItem) {
		if (len > size) {
			cout << "Oops Array is fill...you cann't append!\n";
		}
		else {
		items[len] = newItem;
		len++;
		}
		
	}
	void insert(int index, int newItem){
		if ( index >=0 && index < size) {
			for (int i = len; i >index; i--) {
				items[i] = items[i - 1];
			}
			items[index] = newItem;
			len++;
		}
		else {
			cout << "Oops index out of range!\n";
		}

	}
	void remove(int index) {
		if (index >= 0 && index < size) {
			for (int i = index; i < len-1; i++) {
				items[i] = items[i + 1];
			}
			len--;
		}

		else {
			cout << "Oops index out of range!\n";
		}
	
	}

};



int main()
{
    cout << "Array as >> ADT \n";
    int arrSize;
    cout << "Enter size of Array!\n";
    cin >> arrSize;
    Array arr(arrSize);
	arr.fill();
	arr.display();
	cout << "Len... "<<arr.getLen() << "\tWhile\t"<<"Size... " << arr.getSize()<<"\n";
	arr.appand(4);
	arr.display();
	cout << "Len... " << arr.getLen() << "\tWhile\t" << "Size... " << arr.getSize() << "\n";
	arr.insert(1, 20);
	arr.display();
	arr.insert(1, 2);
	arr.display();
	arr.remove(1);
	arr.display();
}


