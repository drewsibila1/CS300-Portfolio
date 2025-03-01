#include <iostream>
#include <fstream>
#include <sstream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

// Struct to hold course details
struct Course { 
    string id;
    string name;
    vector<string> prerequisites;
};

// Function to load courses from a file
void loadCourseData(unordered_map<string, Course>& courseCatalog, const string& filename) {
    ifstream inputFile(filename);
    if (!inputFile) {
        cout << "Error: Unable to open " << filename << endl;
        return;
    }

    string line;
    while (getline(inputFile, line)) {
        stringstream ss(line);
        string id, name, prerequisite;
        vector<string> prereqs;

        getline(ss, id, ',');
        getline(ss, name, ',');

        while (getline(ss, prerequisite, ',')) {
            prereqs.push_back(prerequisite);
        }

        courseCatalog[id] = { id, name, prereqs };
    }
    inputFile.close();
    cout << "Data successfully imported!" << endl;
}

// Function to display all courses sorted alphabetically
void displayCourseList(const unordered_map<string, Course>& courseCatalog) {
    vector<Course> sortedCourses;
    for (const auto& entry : courseCatalog) {
        sortedCourses.push_back(entry.second);
    }
    sort(sortedCourses.begin(), sortedCourses.end(), [](const Course& a, const Course& b) {
        return a.id < b.id;
    });

    cout << "\nCourse Catalog:" << endl;
    for (const auto& course : sortedCourses) {
        cout << course.id << " - " << course.name << endl;
    }
}

int main() {
    unordered_map<string, Course> courseCatalog;
    int selection;
    string filename;

    while (true) {
        cout << "\nMain Menu:" << endl;
        cout << "1. Load Course Data" << endl;
        cout << "2. Display Course List" << endl;
        cout << "9. Exit Program" << endl;
        cout << "Selection: ";
        cin >> selection;
        cin.ignore();

        switch (selection) {
        case 1:
            cout << "Enter filename (default: ABCU_Advising_Program_Input.csv): ";
            getline(cin, filename);
            if (filename.empty()) {
                filename = "ABCU_Advising_Program_Input.csv";
            }
            loadCourseData(courseCatalog, filename);
            break;
        case 2:
            displayCourseList(courseCatalog);
            break;
        case 9:
            cout << "Exiting program..." << endl;
            return 0;
        default:
            cout << "Invalid option. Please try again." << endl;
        }
    }
}
