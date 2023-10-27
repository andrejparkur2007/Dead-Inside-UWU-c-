#include <iostream>
#include "windows.h"
using namespace std;

int main()
{

    for (int i = 1014; i > 5; i = i - 7) {
        cout << i - 7 << " botskij botik" << "\n";
        cout << "?" << "\n";
        Sleep(10);
    }
}
