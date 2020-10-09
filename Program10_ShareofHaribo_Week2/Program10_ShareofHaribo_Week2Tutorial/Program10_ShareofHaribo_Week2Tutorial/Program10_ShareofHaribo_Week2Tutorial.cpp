#include <iostream>
using namespace std;

int main()
{
    float packetsHaribo = 40;
    float students = 14;
    int packetsEach = (packetsHaribo / students);
    int packetsIget = packetsHaribo - (packetsEach * students);

    cout << "Packets for each student: " << packetsEach << endl;
    cout << "Packets that I get: " << packetsIget << endl;

    return 0;
}

