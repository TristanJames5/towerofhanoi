#include<iostream>
using namespace std;

// Recursive function
void Tower_hanoi(int n, char from, char desti, char tempo){
   
    if (n == 0) return; 
    Tower_hanoi(n - 1, from, tempo, desti); //move n-1 disks to temporary holder
    cout << "Move disk " << n << " from " << from << " to " << desti << endl;
    Tower_hanoi(n - 1,tempo, desti, from); //move n-1 disks to destination
}

int main() {
    
    int n;
    cout<< "Enter number of disks: ";
    cin >>n;

    cout << "\nSteps:\n";
    Tower_hanoi(n, 'A', 'C', 'B'); // A for the source, C for destination, B for temporary


    cout << "\nTotal moves: " << ((1 << n) - 1) << endl; 



    return 0;
}

