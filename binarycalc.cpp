#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(){
clrscr();

int choice;
long double a,b;

cout << "\n Basic Calculator";

cout << "\n Please enter accordingly .";
cout << "\n 1 \t Addition";
cout << "\n 2 \t Subtraction";
cout << "\n 3 \t Multiplication";
cout << "\n 4 \t Division";

cout << "\n Please Enter your choice:\n ";
cin >> choice;

switch(choice) {
	case 1:
		cout << "Enter 2 values\n";
		cin  >> a>> b;
		cout <<" "<<a<< " + "<<b<< " = " << a+b;
		break;
	case 2:
		cout << "Enter 2 values\n";
		cin  >> a>> b;
		cout <<" "<<a<< " - "<<b<< " = " << a-b;
		break;
	case 3:
		cout << "Enter 2 values\n";
		cin  >> a>> b;
		cout <<" "<<a<< " x "<<b<< " = " << a*b;
		break;
	case 4:
		cout << "Enter 2 values \n";
		cin  >> a>> b;
		cout <<" "<<a<< " /  "<<b<< " = " << a/b;
		cout << "\n Remainder = " << (int) a% (int)b;
		break;
	default:
		cout << "Invalid Input";
		break;
}

system("pause");
}

