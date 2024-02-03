#include <iostream>
#include <cstdlib> // constains srand() è rand()
#include <ctime> // constains time()
#include <string>
#include <vector>

using namespace std;

int printArr(int, int, int**);
int countElems(int, int, int**);



int fillTwoDim(int numRows, int numCols, int** mas) {
    srand(time(NULL));
    for (int i{}; i < numRows; i++)
    {
        mas[i] = new int[numCols] {};
    }
    for (int row = 0; row < numRows; ++row) {                 // full array of numbers
        for (int col = 0; col < numCols; ++col) { 
            mas[row][col] = 1 + rand() % 100;
        }
    }
    printArr(numRows, numCols, mas);
    return 0;
}

int printArr(int numRows, int numCols, int** mas) {
    for (int row = 0; row < numRows; ++row) {
        for (int col = 0; col < numCols; ++col) {       
            cout << mas[row][col] << " ";
        }
        cout << endl;
    }
    countElems(numRows, numCols, mas);
    return 0;
}

int countElems(int numRows, int numCols, int** mas) {  
    int k = 0;
    for (int row = 0; row < numRows; ++row) {          // count sum 
        for (int col = 0; col < numCols; ++col) {
            if (row == col) {
                k += mas[row][col];
            }
        }
    }
    cout << k << endl;
    return 0;
}


struct Employee {

    string name;
    int id;
    string position;

    void displayInfo() const {
        cout << "Name: " << name << ", ID: " << id << ", Position: " << position << endl;
    }
};



int main() {
    /*Task 3*/
    cout << "Task 3" << endl;

    int numRows, numCols;
    cout << "Input the number of rows: ";
    cin >> numRows;
    cout << "Input the number of columns: ";
    cin >> numCols;
    int** mas{ new int* [numRows] };
    fillTwoDim(numRows, numCols, mas);


    /*Task 4*/
    cout << "Task 4" << endl;

    Employee tom;
    tom.name = "Tom";
    tom.id = 34;
    tom.position = "CEO";
    cout << "Name: " << tom.name << "\tID: " << tom.id << "\tPosition: " << tom.position << endl;


    return 0;
}