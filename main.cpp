/*
	Author: Dung Harry
	Date created: 5th, October 2013
	Operating System: Windows XP Professional
	Tool: Turbo C++ 3.0 with Dosbox 0.74

	Description: this is C++ program about how to print the sequence of increasing number have specific number of sequence
*/

#include "iostream.h"

class NumberHandler {
private:
	int iNumber;
	int iNumPrint;
public:
	void vEnterNumber() {
		cout<<"Enter the number: ";
		cin>>iNumber;
	};

	void vEnterNumPrint() {
		cout<<"Enter the number of number do you want to print: ";
		cin>>iNumPrint;
	};

	void vPrint() {
		int num = 1;

		for(int i = 0; i < iNumPrint; i ++) {
			for(int j = 0; j < iNumber; j ++, num ++) {
				cout<<(num % 10);
			}

			cout<<endl;
		}
	};
};

int main(int argc, char *argv) {
	cout<<"Author: Dung Harry. Date created: 5th, October 2013"<<endl<<endl;

	NumberHandler handler;

	handler.vEnterNumber();
	handler.vEnterNumPrint();
	handler.vPrint();

	return 0;
}
