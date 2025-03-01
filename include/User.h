#pragma once
#include <iostream>
#include <string>
#include <list>
using namespace std;
class User
{
protected:
	int ID , password , age;
	string name , mail;
	char gender , bloodType;
	int whoAreYou; //We will use it as a sign to know who is using the system (1 => Doner , 2 => Recipient)

public:
	User();
	User(int id, int pass, int age, string name, string mail, char gender, char bloodType);
	int logIn(string name, int pass , int Who);
};
// "extern" => mean that I'll use this variable out the class
extern list<User> Users;
