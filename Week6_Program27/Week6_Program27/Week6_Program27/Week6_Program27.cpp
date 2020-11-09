#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string user_name;
    string user_name1;
    string testString = "Do you know who loves C++ XX does!";

    cout << "Please enter your name" << endl; 
    getline(cin, user_name);

    testString.insert(27, user_name, 0, user_name.length());

    cout << testString;
    
    testString.replace(26, user_name.length() + 2, user_name);

    cout << " " << testString;

    cout << "\nPlease enter another name longer than the previous one" << endl;
    getline(cin, user_name1);

    testString.replace(26, user_name.length(), user_name1);
    cout << testString;

}

