#include <iostream>
#include <time.h>
#include <Windows.h>
#include "Header.h"

using namespace std;

float randint(int min, int  max) {
    return rand() % (max - min + 1) + min;
}

#define n 11

int main() 
{
    srand(time(NULL));

    float array[n][n];
    float max = 0;
    float min = 223;

    { HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY); }
    std::cout << "Required sector" << endl;
    { HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_INTENSITY); }
    std::cout << "Not required sector" << endl;
    { HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE | FOREGROUND_INTENSITY); }
    std::cout << "Maximum founded" << endl;
    { HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE); 
    SetConsoleTextAttribute(hwnd, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); }
    std::cout << "Minimum founded" << endl;
    std::cout << endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            array[i][j] = randint(100, 222);
            if (i == j) {
                HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                if (array[i][j] > max) {
                    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                    max = array[i][j];
                    std::cout << array[i][j] << " ";
                }
                else { std::cout << array[i][j] << " "; }
            }
            else if (i + j == n - 1) {
                HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                if (array[i][j] > max) {
                    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                    max = array[i][j];
                    std::cout << array[i][j] << " ";
                }
                else { std::cout << array[i][j] << " ";}
            }
            else if ((i > j && i + j + 2 < n + 1) || (j > i && i + j + 2 > n + 1)) {
                HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                if (array[i][j] > max) {
                    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                    max = array[i][j];
                    std::cout << array[i][j] << " ";
                }
                else { std::cout << array[i][j] << " "; }
            }
            else if ((i >= 0 && i <= n / 2) && (j >= n / 2 && j < n))
            {
                HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hwnd, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                if (array[i][j] > max) {
                    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                    max = array[i][j];
                    std::cout << array[i][j] << " ";
                }
                else { std::cout << array[i][j] << " "; }
            }
          
            else {
                HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                SetConsoleTextAttribute(hwnd, FOREGROUND_RED | FOREGROUND_INTENSITY);
                if (array[i][j] < min){
                    HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
                    SetConsoleTextAttribute(hwnd, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN);
                    min = array[i][j];
                    std::cout << array[i][j] << " ";
                }
                else { std::cout << array[i][j] << " "; }
            }
        }
        std::cout << endl;
    }
    std::cout << endl;
    { HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hwnd, FOREGROUND_BLUE | FOREGROUND_INTENSITY); }
    std::cout << "MAXIMUM: " << max << endl;
    { HANDLE hwnd = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hwnd, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN); }
    std::cout << "MINIMUM: " << min << endl;
}