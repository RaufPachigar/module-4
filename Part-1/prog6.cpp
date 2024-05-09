//Assume a class cricketer is declared. Declare a derived class batsman from cricketer. 
//Data member of batsman. Total runs, Average runs and best performance. 
//Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include <iostream>
#include <string>
using namespace std;

class Cricketer {
    
public:
	string name;
    int age;
    void inputCricketerData() {
        cout << "Enter cricketer's name: ";
        cin >> name;
        cout << "Enter cricketer's age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer {
private:
    int totalRuns;
    float averageRuns;
    int bestPerformance;
public:
    void inputBatsmanData() {
        inputCricketerData();
        cout << "Enter total runs scored: ";
        cin >> totalRuns;
        cout << "Enter best performance (in a single innings): ";
        cin >> bestPerformance;
    }
    
    void calculateAverageRuns() {
        averageRuns = totalRuns / 10.0; // Assuming 10 innings played for simplicity
    }
    
    void displayData() {
        cout << "\nBatsman Details:\n";
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << endl;
    }
};

int main() {
    Batsman batsman;
    batsman.inputBatsmanData();
    batsman.calculateAverageRuns();
    batsman.displayData();
    return 0;
}
