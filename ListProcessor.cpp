// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << " size of list : " << cows.size() << " sum of list : " << cows.sum() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << " size of list : " << cows.size() << " sum of list : " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << " size of list : " << cows.size() << " sum of list : " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << " size of list : " << cows.size() << " sum of list : " << cows.sum() << endl;
	cout << "horses list:  " << horses << " size of list : " << horses.size() << " sum of list : " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << " size of list : " << cows.size() << " sum of list : " << cows.sum() << endl;
	cout << "horses list:  " << horses << " size of list : " << horses.size() << " sum of list : " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << " size of list : " << cows.size() << " sum of list : " << cows.sum() << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << " size of list : " << cows.size() << " sum of list : " << cows.sum() << endl;
	cout << "horses list:  " << horses << " size of list : " << horses.size() << " sum of list : " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << " size of list : " << pigs.size() << " sum of list : " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << " size of list : " << cows.size() << " sum of list : " << cows.sum() << endl;
	cout << "horses list:  " << horses << " size of list : " << horses.size() << " sum of list : " << horses.sum() << endl;
	cout << "pigs list  :  " << pigs << " size of list : " << pigs.size() << " sum of list : " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
