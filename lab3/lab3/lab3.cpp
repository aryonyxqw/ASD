#include <iostream>
#include <windows.h>
#include <vector>
using namespace std;

int main()
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    int left = 0;
    int right = 79;
    int top = 0;
    int bottom = 23;
    vector<vector<int>> spiral;

    while (left <= right && top <= bottom)
    {
        for (int y = top; y <= bottom; y++)
            spiral.push_back({ left, y });
        left++;

        for (int x = left; x <= right; x++)
            spiral.push_back({ x, bottom });
        bottom--;

        if (left <= right)
        {
            for (int y = bottom; y >= top; y--)
                spiral.push_back({ right, y });
            right--;
        }

        if (top <= bottom)
        {
            for (int x = right; x >= left; x--)
                spiral.push_back({ x, top });
            top++;
        }
    }

    for (int i = spiral.size() - 1; i >= 0; i--)
    {
        COORD position;
        position.X = spiral[i][0];
        position.Y = spiral[i][1];

        SetConsoleCursorPosition(console, position);
        cout << '*' << flush;
        Sleep(1);
    }

    SetConsoleCursorPosition(console, { 0, 24 });
    return 0;
}