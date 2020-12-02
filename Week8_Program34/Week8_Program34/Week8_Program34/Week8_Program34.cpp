#include <iostream>
#include <algorithm>


void comma2blank(char* textToChange);

int main()
{
	char user_text[100];
	char* pUser_text = user_text;

	std::cout << "Please enter your text, but instead of putting spaces put commas" << std::endl;
	std::cin >> user_text;

	
	comma2blank(pUser_text);

	std::cout << "Your text now is: " << pUser_text;

}

void comma2blank(char* textToChange)
{

	std::replace(textToChange, textToChange + strlen(textToChange), ',', ' ');

	
}