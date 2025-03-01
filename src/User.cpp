#include "User.h"
#include <list>
using namespace std;
list<User> Users; 
int User::logIn(string name , int pass , int Who){
    auto it = find_if(Users.begin(), Users.end(), [&](const User& user) {
        return (user.name == name && user.password == pass && user.whoAreYou == Who);
        });
    if (it != Users.end()) {
        if (Who == 1) //I'll display the "Doner" menu
        {
            //Display the main menu for the doner
        }
        else 
        {
            //Display the main menu for the recipient
        }

    }
    else {
        cout << "User Not Found!" << endl;
    }
	
}
