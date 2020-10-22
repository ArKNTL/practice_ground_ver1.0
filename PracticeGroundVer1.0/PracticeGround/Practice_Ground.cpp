#include "std_lib_facilities.h"
//using namespace std;

int main() 
{
	string previous = " "; // previous word; initialized to “not a word”
	string current; // current word
	while (cin >> current) { // read a stream of words
		if (previous == current) // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
		previous = current;
	}

	
	/*cout << "Hello, programming!\n" 
		<< "Here we go!\n";*/
	/*
	cout << "Please enter your name and age!\n";
	string name = "???";
	int age = -1;
	cin >> name >> age;
	cout << "Hi, " << name << "! (age " << age << ")\n";*/
	/*
	----------------------TRY THIS (IOStreams)--------------------------
	Get the “name and age” example to run. Then, modify it to
	write out the age in months: read the input in years and
	multiply (using the * operator) by 12. Read the age into a
	double to allow for children who can be very proud of
	being five and a half years old rather than just five.*/
	/*
	cout << "Please enter your [name] and [age]: \n";
	string name = "???";
	double age = -1;
	cin >> name >> age;
	double age_multiplied = age * 12;
	cout << "Hi, " << name << "! (age: " << age_multiplied << " months)\n";
	keep_window_open(); 
	return 0;
	*/
	/*
	----------------------TRY THIS (Operators)--------------------------
	Get this little program to run. Then, modify it to read an int
	rather than a double. Note that sqrt() is not defined for an
	int so assign n to a double and take sqrt() of that. Also,
	“exercise” some other operations. Note that for ints / is
	integer division and % is remainder (modulo), so that 5/2
	is 2 (and not 2.5 or 3) and 5%2 is 1. The definitions of
	integer *, /, and % guarantee that for two positive ints a
	and b we have a/b * b + a%b == a.*/
	/*
	cout << "Please enter an integer and a floating-point value: ";
	int n, a, b = -1;
	double n2 = -1;
	cin >> n >> n2;
	cout << "Please enter two positive integer: ";
	cin >> a >> b;
	cout << "n == " << n << "\na == " << a << "\nb == " << b 
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nremainder of n == " << n % 2
		<< "\nsquare root of n == " << sqrt(n2)
		<< "\ninteger *, /, and % guarantee that for two positive ints (a and b) we have a/b * b + a%b == a("
		<< a / b * b + a % b << ")\n";
	return 0;

	

	/*---------------------INCREMENT------------------
	-[The increment operator ++ (two plus signs) is used to increase the value of a variable by one]
	EXAMPLE:
		a = a + 1;
		 is the same as
		a++;
	-------------Types of Increment Operator-----------*/
	//--------Increment: Pre-increment (++variable)------
	/*
	cout << "Increment type: Pre-increment (++variable)\n";
	int num, a;
	a = 10;
	num = ++a;
	cout << "the value of a is " << a << endl;
	cout << "the value of num is " << num << endl << endl;
	// Increment: Post-increment (variable++)
	cout << "Increment type: Post-increment (variable++)\n";
	int num_b, b;
	b = 10;
	num_b = b++;
	cout << "the value of b is " << b << endl;
	cout << "the value of num_b is " << num_b << endl << endl << endl;
	keep_window_open();
	return 0;
	*/
	/*---------------------DECREMENT-------------------
	-[The decrement operator -- (two minus signs) is used to decrease the value of a variable by one]
	EXAMPLE:
		a = a - 1;
		 is the same as
		a--;
	-------------Types of Decrement Operator-----------
	--------Decrement: Pre-decrement (--variable)------*/
	/*
	cout << "Decrement type: Pre-decrement (--variable)\n";
	int num_c, c;
	c = 10;
	num_c = --c;
	cout << "the value of c is " << c << endl;
	cout << "the value of num_c is " << num_c << endl << endl;
	// Decrement: Post-decrement (variable--)
	cout << "Decrement type: Post-decrement (variable--)\n";
	int num_d, d;
	d = 10;
	num_d = d--;
	cout << "the value of d is " << d << endl;
	cout << "the value of num_d is " << num_d << endl;
	keep_window_open();
	return 0;
	*/ 
	//-------------Post: Increment & Decrement----------------
	/*
	cout << "Post-Increment (variable++)\n";
	int a = 5;
	int num_a = a++;
	cout << "a: " << a << endl;
	cout << "num_a: " << num_a << endl << endl;
	cout << "Post-Decrement (variable--)\n";
	int b = 5;
	int num_b = b--;
	cout << "b: " << b << endl;
	cout << "num_b: " << num_b << endl << endl;
	*/
	//-------------Pre: Increment & Decrement----------------
	/*
	cout << "Pre-Increment (++variable)\n";
	int c = 5;
	int num_c = ++c;
	cout << "c: " << c << endl;
	cout << "num_c: " << num_c << endl << endl;
	cout << "Pre-Decrement (--variable)\n";
	int d = 5;
	int num_d = --d;
	cout << "d: " << d << endl;
	cout << "num_d: " << num_d << endl;
	*/
	
	
}