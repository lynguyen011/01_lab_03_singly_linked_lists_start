// Testing cases

#include "AnyList.h"

void inClassTestCases(const int a[], int numOfElements)
{
	//AnyList list;

	//for (int i = 0; i < numOfElements; ++i)
	//	list.insertBack(a[i]);

	//cout << "Array:\t";
	//for (int i = 0; i < numOfElements; ++i)
	//	cout << a[i] << " ";
	//cout << endl;

	//cout << "List:\t";
	//list.print();
	//cout << endl;

	//cout << "Total elements:\t" << list.getNumberOfElements() << endl;

	//if (list.getNumberOfElements() > 0)
	//{
	//	cout << "First element:\t" << list.getFirstElement() << endl;
	//	cout << "Last element:\t" << list.getLastELement() << endl;
	//}

	//cout << endl;
}

void inClassTestCases()
{
	int a1[] = { 1 };
	inClassTestCases(a1, 1);

	int a2[] = { 6, 4 };
	inClassTestCases(a2, 2);

	int a3[] = { 9, 7, 5, 4, 2, 1 };
	inClassTestCases(a3, 6);
}
