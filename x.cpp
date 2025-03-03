#include <iostream>
using namespace std;
int main()
{
	//userX= object.signUp();
	// listofUsers.push(userX);

}
// !!!! return data type is not void but the object of the user !!!!!
void signUp()
{ // على حسب البيانات المطلوبة ونوع السيستم بتاعنا ممكن نزيد  أو ننقص
	string name;
	int age;
	string username;
	string password;

	cout << "*********** Welcome to our // system! ***********";
	cout << "Please enter your name:";
	cin >> name;
	cout << "Please enter your age:";
	cin >> age;
	cout << "Please enter your username:";
	cin >> username;
	string check;
	bool done = false;
	do {
		cout << "Please enter your passowrd:";
		cin >> password;
		cout << "Please enter your password again:";
		cin >> check;
		if (password == check)
			done = true;
		else
			cout << "Not matching!";
	} while (done == false);
	//هنا بننادي الconstructor بتاع ال اوبجكت بتاع اليوزر
	// return object(name, age, username, password);

}


