// The Tower of Hanoi problem

#include <iostream>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

// Global variables
int steps = 0;

// Tower of Hanoi implementing function
void TowerHanoi(int n, string left, string right, string middle)
{   
    if(n < 1)
    {
        return;
    }
    TowerHanoi(n-1, left, middle, right);
    cout << "Move disk " << n << " from stack " << left << " to stack " << right << endl;
    steps = steps + 1;
    TowerHanoi(n-1, middle, right, left);
}


// Main routine
int main()
{
    int n;
    steps = 0;
    string l = "LEFT";
    string r = "RIGHT";
    string m = "MIDDLE";

    cout << "TOWER OF HANOI" << endl << endl;
    cout << "       >> Enter the number of disks you want to play: ";
    cin >> n;

    // Check if valid user input
    if(n < 1)
    {
        cout << "There must be at least 1 disk" << endl;
        return 0;
    }

    cout << endl;

    cout << "Sequence of movements:" << endl << endl;

    clock_t start = clock();

    // Call TowerHanoi function
    TowerHanoi(n, l, r, m);

    cout << endl;
    cout << "Total number of steps: " << steps << "." << endl;
    steps = 0;

    clock_t stop = clock();
    clock_t t = stop - start;
    double duration = t / (double) CLOCKS_PER_SEC;
    double limit = 120.0;

    if(duration < limit)
    {
        cout << "Calculated in " << duration << " seconds." << endl;
    }
    else
    {
        double tMin = duration/60;
        cout << "Calculated in " << tMin << " minutes." << endl;
    }
    
    return 0;
}