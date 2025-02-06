
#include <iostream>
using namespace std;

class Report {
public:
    void generate() { cout << "Generating report...\n"; }
    void saveToFile() { cout << "Saving report to file...\n"; }
};
//The Report class is responsible for both generating reports and handling file operations.



class Report {
public:
    void generate() { cout << "Generating report...\n"; }
};

class FileSaver {
public:
    void saveToFile() { cout << "Saving to file...\n"; }
};
//Each class focuses on a single responsibility.
