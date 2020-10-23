#include "std_lib_facilities.h"
//using namespace std;

int main() 
{
	//-------------------------DRILL # 2------------------------------
	/*
1. This drill is to write a program that produces a simple form letter
based on user input. Begin by typing the code from §3.1
prompting a user to enter his or her first name and writing
“Hello, first_name” where first_name is the name entered by
the user. Then modify your code as follows: change the prompt
to “Enter the name of the person you want to write to” and
change the output to “Dear first_name,”. Don’t forget the
comma.2. Add an introductory line or two, like “How are you? I am fine. I
miss you.” Be sure to indent the first line. Add a few more lines
of your choosing — it’s your letter.
3. Now prompt the user for the name of another friend, and store it
in friend_name. Add a line to your letter: “Have you seen
friend_name lately?”
4. Declare a char variable called friend_sex and initialize its value
to 0. Prompt the user to enter an m if the friend is male and an f
if the friend is female. Assign the value entered to the variable
friend_sex. Then use two if-statements to write the following:
If the friend is male, write “If you see friend_name please ask
him to call me.”
If the friend is female, write “If you see friend_name please ask
her to call me.”
5. Prompt the user to enter the age of the recipient and assign it to
an int variable age. Have your program write “I hear you just
had a birthday and you are age years old.” If age is 0 or less or
110 or more, call simple_error("you're kidding!") using
simple_error() from std_lib_facilities.h.
6. Add this to your letter:
If your friend is under 12, write “Next year you will be age+1.”
If your friend is 17, write “Next year you will be able to vote.”
If your friend is over 70, write “I hope you are enjoying
retirement.”
Check your program to make sure it responds appropriately to
each kind of value.
7. Add “Yours sincerely,” followed by two blank lines for a
signature, followed by your name.*/
// Prompt the user to enter string first_name
	string first_name;
	cout << "Enter the name of the person you want to write to: \n";
	cin >> first_name;
	// Prompt the user to enter string friend_name
	string friend_name;
	cout << "\nEnter the name of your other friend: \n";
	cin >> friend_name;
	// Prompt the user to enter char friend_sex
	char friend_sex = 0;
	cout << "\nPlease enter m if " << friend_name << " is a Male or f if your a female: \n";
	cin >> friend_sex;
	// Promt the user to enter int age
	int age = 0;
	cout << "\nEnter the age of your friend " << first_name << '\n';
	cin >> age;

	cout << "\nDear " << first_name << ",\n";
	cout << "\n	Hey, what are you doing nowadays?\n";
	cout << "\n	Have you seen " << friend_name << " lately?\n";
	// Output the conditional statement if char friend_sex is m or f, else other 
	if (friend_sex == 109) // char 109 == m
		cout << "\n	If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 102) // char 102 == f
		cout << "\n	If you see " << friend_name << " please ask her to call me.\n";
	else
		cout << "\n	If you saw " << friend_name << " please tell " << friend_name << " to call me.\n";
	// Output the conditional statement if age is less than or equal to 0
	if (age <= 0) // 
		simple_error("\nyou're kidding!");
	// Output the conditional statement if age is greater than 110
	if (age > 110)
		simple_error("\nDamn son!");
	// else if it ranges from 1-110 
	else
		cout << "\n	I heard you just had a birthday and you are now " << age << " years old.\n";
	// Output the conditional statement if age is less than 12
	if (age < 12)
		cout << "\n	Next year you will be " << ++age << " years old\n";
	// Output the conditional statement if age is equal to 17
	if (age == 17)
		cout << "\n	Next year you will be able to vote\n";
	// Output the conditional statement if age is greater than or equal to 70
	if (age >= 70)
		cout << "\n	I hope you are enjoying retirement\n";
	// ending remark for the letter; name and signature
	cout << "\n\n	Yours sincerely\n\n";
	cout << "\n	ArkNTL\n\n";
	keep_window_open();

	/*
	//--------------------------------DRILL----------------------------------
		//This drill is to write a program that produces a simple form letter based on user input
		// 1. Prompting the user to input his/her first_name then create an output line
	cout << "Enter the name of the person you want to write to: \n";
	string first_name; // first_name is a variable of type string
	cin >> first_name; // read characters into first_name
	cout << "Dear " << first_name << ",\n";
	// 2. output and introductory line and use indention
	cout << "\n	Hey, what are you doing nowadays?\n";
	// 3. prompt the user to enter the name of another friend and add a line "Have you seen friend_name lately?"
	cout << "\nEnter the name of your other friend: \n";
	string friend_name; // from 3. friend_name to be prompt by the user
	cin >> friend_name;
	cout << "\n	Have you seen " << friend_name << " lately?\n";
	// 4. promt the user to enter the an m or f, then use 2 ifs to output the data
	char friend_sex = 0;
	cout << "\nPlease enter m if " << friend_name << " is a Male or f if your a female: \n";
	cin >> friend_sex;
	if (friend_sex == 109)
		cout << "\n	If you see " << friend_name << " please ask him to call me.\n";
	if (friend_sex == 102)
		cout << "\n	If you see " << friend_name << " please ask her to call me.\n";
	// 5. prompt the user for age, if age is 0 or less than, or more than 110 use simple_error function
	int age = 0;
	cout << "\nEnter the age of your friend " << first_name << '\n';
	cin >> age;
	if (age <= 0)
		simple_error("\nyou're kidding!");
	if (age > 110)
		simple_error("\nDamn son!");
	else
		cout << "\n	I heard you just had a birthday and you are now " << age << " years old.\n";
	// 6. use increment method to add age for specific condition(s)
	if (age < 12)
		cout << "\n	Next year you will be " << ++age;
	if (age == 17)
		cout << "\n	Next year you will be able to vote";
	if (age >= 70)
		cout << "\n	I hope you are enjoying retirement";
	// 7. add "Yours sincerely" followed by two blank lines for a signature followed by your name
	if (age < 12)
		cout << "\n	Next year you will be " << ++age << " years old\n";
	if (age == 17)
		cout << "\n	Next year you will be able to vote\n";
	if (age >= 70)
		cout << "\n	I hope you are enjoying retirement\n";
	cout << "\n\n	Yours sincerely\n\n";
	cout << "\n	ArkNTL\n\n";
	keep_window_open();
	*/

	//-----------UnSafe(implicit) Conversion int-char-int--------------------
	/*
	double d = 0;
	while (cin >> d) { // repeat the statements below
	// as long as we type in numbers
		int i = d; // try to squeeze a double into an int
		char c = i; // try to squeeze an int into a char
		int c_value = c; // get the integer value of the character
		cout << "d==" << d // the original double
			<< " i==" << i // converted to int
			<< " c(value)==" << c_value // int value of char
			<< " char(" << c << ")\n"; // the char
	}
	*/

	//-----------------TypeSafe Conversion Double-Int-------------------------
	/*
	double d1 = 2.3;
	int d2 = d1 + 2; // 2 is converted to 2.0 before adding
	cin >> d1;
	if (d1 < 0) // 0 is converted to 0.0 before comparison
		cout << "d1 is negative";
	else
		cout << d1 << " d1 is positive";
	*/

	//------------------Word Counting and Gramamr Checker----------------------
	/*
	int number_of_words = 0;
	string previous = " "; // not a word
	string current;
	while (cin >> current) {
		++number_of_words; // increase word count
		if (previous == current) // even if the two interchanges the resulting value is still the same
			cout << "word number " << number_of_words
			<< " repeated: " << current << '\n';
		previous = current;
	}
	*/
	/*
	string previous = " "; // previous word; initialized to “not a word”
	string current; // current word
	while (cin >> current) { // read a stream of words
		if (previous == current) // check if the word is the same as last
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
	*/
	
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