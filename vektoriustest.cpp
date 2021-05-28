//#include <bits/stdc++.h>
#include <iostream>
using namespace std;
template <typename T> class vectorClass
{

	T* arr;

	int capacity;

	int current;

public:
	vectorClass()
	{
		arr = new T[1];
		capacity = 1;
		current = 0;
	}

	void push(T data)
	{
		if (current == capacity) {
			T* temp = new T[2 * capacity];

			for (int i = 0; i < capacity; i++) {
				temp[i] = arr[i];
			}
			delete[] arr;
			capacity *= 2;
			arr = temp;
		}

		arr[current] = data;
		current++;
	}

	void push(int data, int index)
	{

		if (index == capacity)
			push(data);
		else
			arr[index] = data;
	}

	T get(int index)
	{

		if (index < current)
			return arr[index];
	}

	void pop() { current--; }

	int size() { return current; }

	int getcapacity() { return capacity; }

	void print()
	{
		for (int i = 0; i < current; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};
int main()
{
	vectorClass<int> v;
	vectorClass<char> v1;
	v.push(10);
	v.push(20);
	v.push(30);
	v.push(40);
	v.push(50);
	v1.push(71);
	v1.push(72);
	v1.push(73);
	v1.push(74);

	cout << "Vector dydis : " << v.size() << endl;
	cout << "Vector talpa : " << v.getcapacity() << endl;

	cout << "Vector elementai : ";
	v.print();

	v.push(100, 1);

	cout << "\nPo pirmo pakeitimo" << endl;

	cout << "Su int : " << endl;
	v.print();
	cout << "Su char : " << endl;
	v1.print();
	cout << "Elementas 1 int: " << v.get(1)
		<< endl;
	cout << "Elementas 1 char: "
		<< v1.get(1) << endl;

	v.pop();
	v1.pop();

	cout << "\nPo istrinimo" << endl;

	cout << "Vector int: " << v.size() << endl;
	cout << "Vector char: " << v1.size()
		<< endl;
	cout << "Vector talpa int : "
		<< v.getcapacity() << endl;
	cout << "Vector talpa char : "
		<< v1.getcapacity() << endl;

	cout << "Vector elementai int: ";
	v.print();
	cout << "Vector elementai char: ";
	v1.print();

	return 0;
}