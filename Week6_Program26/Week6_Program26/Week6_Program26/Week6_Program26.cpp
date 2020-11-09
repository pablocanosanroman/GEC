#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string user_sentence;

    cout << "Please enter a sentence: " << endl;
    getline(cin, user_sentence);

   replace(user_sentence.begin(), user_sentence.end(), 'e', 'X');
   

    cout << user_sentence;
    

    return 0;
    
    
}
