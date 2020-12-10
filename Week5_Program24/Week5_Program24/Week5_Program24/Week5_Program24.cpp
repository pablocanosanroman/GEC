#include <iostream>
using namespace std;

char Cards[2][5] = {
    { 'A', 'D', 'C', 'B', 'E' },
    { 'D', 'B', 'A', 'E', 'C' }
};

bool matched[2][5] = {
    { false, false, false, false, false },
    { false, false, false, false, false }
};

int attemptCount = 0;
int matches = 0;

void InitialBoard();
void UpdateBoard(int guess1, int guess2);

int main()
{
    int g1, g2;
    InitialBoard();

    while (matches < 5)
    {
        cout << "Pick a card from the left:" << endl;
        cin >> g1;

        cout << "Pick a card from the right:" << endl;
        cin >> g2;

        UpdateBoard(g1, g2);
    }
}

void InitialBoard() {
    system("cls");
    cout << "Attempts:\t" << ++attemptCount << endl;

    for (int i = 0; i < 5; i++) {
        if (matched[0][i]) {
            cout << "[" << Cards[0][i] << "] ";
        }
        else {
            cout << "[" << i + 1 << "] ";
        }
        if (matched[1][i]) {
            cout << "[" << Cards[1][i] << "] ";
        }
        else {
            cout << "[" << i + 1 << "] ";
        }
        cout << endl;
    }
}

void UpdateBoard(int guess1, int guess2) {

    system("cls");
    cout << "Attempts:\t" << ++attemptCount << endl;

    if (Cards[0][guess1 - 1] == Cards[1][guess2 - 1]) 
    {
        cout << "Cards revealed." << endl;
        matched[0][guess1 - 1] = true;
        matched[1][guess2 - 1] = true;
        matches++;
    }
    else 
    {
        cout << "No cards revealed." << endl;
    }

    for (int i = 0; i < 5; i++) {
        if (matched[0][i]) {
            cout << "[" << Cards[0][i] << "] ";
        }
        else {
            cout << "[" << i + 1 << "] ";
        }
        if (matched[1][i]) {
            cout << "[" << Cards[1][i] << "] ";
        }
        else {
            cout << "[" << i + 1 << "] ";
        }
        cout << endl;
    }
}
