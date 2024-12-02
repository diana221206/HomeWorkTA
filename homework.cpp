#include <iostream>
#include <vector>

using namespace std;


void lifoTask() {
    vector<int> dynamicArray;

    
    cout << "Enter 5 numbers for LIFO task: ";
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        dynamicArray.push_back(num);
    }

    cout << "LIFO task:" << endl;

    
    while (!dynamicArray.empty()) {
        int lastElement = dynamicArray.back();
        dynamicArray.pop_back();
        cout << lastElement << " ";
    }
    cout << endl;
}


void fifoTask() {
    vector<int> dynamicArray;

    
    cout << "Enter 5 numbers for FIFO task: ";
    for (int i = 0; i < 5; i++) {
        int num;
        cin >> num;
        dynamicArray.push_back(num);
    }

    cout << "FIFO task:" << endl;

    
    while (!dynamicArray.empty()) {
        int firstElement = dynamicArray.front();
        dynamicArray.erase(dynamicArray.begin());
        cout << firstElement << " ";
    }
    cout << endl;
}

int main() {
    int choice;

    cout << "Select a task:" << endl;
    cout << "1. LIFO" << endl;
    cout << "2. FIFO" << endl;
    cin >> choice;

    switch (choice) {
    case 1:
        lifoTask();
        break;
    case 2:
        fifoTask();
        break;
    default:
        cout << "Invalid choice." << endl;
        break;
    }

    return 0;
}
