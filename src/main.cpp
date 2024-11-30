#include <iostream>
#include <string>
#include "GpaCalc.h"  // Include the header file for GPA calculation functions
#include <string>
using namespace std;

void GRADEWEIGHTS() {
int sections;
double totalGrade;

cout << "How many sections do you have? (ex: assignments or tests)" << endl;
cin >> sections;
double percent[sections];
int weighting[sections];
for (int i = 0; i < sections; i++) {
cout << "Section " << i + 1 << " percent grade: ";
cin >> percent[i];
cout << "\n\nSection weight: ";
cin >> weighting[i];
totalGrade += weighting[i] * (percent[i] * 0.01);



}
cout << "Your total grade is a: " << totalGrade << "%";




}






void GPACALC() {
int classNum;
cout << "How many classes are you taking right now?" << endl;
cin >> classNum;

while (true) {
if (classNum > 0) {
break;
} else {
cout << "Invalid number of classes!" << " Try again." << endl;
cout << "\n\nHow many classes are you taking right now?" << endl;
cin >> classNum;
}
}
double grades[classNum];
string type[classNum];
for (int i = 0; i < classNum; i++) {
cout << "Grade " << i + 1 << ": ";
cin >> grades[i];

while (true) {
if (grades[i] < 0 || grades[i] > 100) {
cout << "Invalid grade. Please try again." << endl;
cin >> grades[i];
} else {
break;
}

}
cout << "\n\nType of class: " << endl;
cout << "1. Regular" <<endl;
cout << "2. Honors" << endl;
cout << "3. AP\n\n" << endl;
cin >> type[i];
while (true) {
if (type[i] == "1" || type[i] == "2" || type[i] == "3" || type[i] == "Regular" || type[i] == "Honors" || type[i] == "AP") {
break;
} else {
cout << "Invalid option. Please try again." << endl;
cin >> type[i];
}
}
}
cout << "Your unweighted GPA is: " << FindUnweighted(grades,classNum) << endl;
cout << "Your weighted GPA is: " << FindWeighted(grades,classNum,type) << endl;

if (FindUnweighted(grades,classNum) >= 3.8) {
cout << "You have a very nice unweighted GPA!" << endl;
} else if (FindUnweighted(grades,classNum) >= 3.5) {
cout << "That is a solid unweighted GPA!" << endl;
} else if (FindUnweighted(grades,classNum) >= 3.0) {
cout << "Thats a decent unweighted GPA!" << endl;
} else if (FindUnweighted(grades,classNum) >= 2.5) {
cout << "Your unweighted GPA could use some work!" <<endl;
} else {
cout << "GEEZ! Your unweighted GPA is hard to look at..." << endl;
}



if (FindWeighted(grades,classNum,type) >= 4.8) {
cout << "You have a very nice weighted GPA!" << endl;
} else if (FindWeighted(grades,classNum,type) >= 4.5) {
cout << "That is a solid weighted GPA!" << endl;
} else if (FindWeighted(grades,classNum,type) >= 4.2) {
cout << "Thats a decent weighted GPA!" << endl;
} else if (FindWeighted(grades,classNum,type) >= 3.5) {
cout << "Your weighted GPA could use some work!" <<endl;
} else {
cout << "GEEZ! Your weighted GPA is hard to look at..." << endl;
}

}
int main() {
// Declarations (global)

int mode;
string options[2] = 
{
"GPA Calculator",
"Grade Weights"
};

int optionsNum = 2;
while (true) {
cout << "\n\nChoose a mode:\n" << endl;
for (int i = 0; i < optionsNum; i++) {
cout << i +1 << ". " << options[i] << endl;
} 
cin >> mode;
while (true) {
    

if (mode == 1) {
GPACALC();
break;
} else if (mode == 2) {
GRADEWEIGHTS();
break;
} else {
cout << "Try again!" << endl;
cin >> mode;
}
}
}





cout <<"\n\nHave a great day!" <<endl;
return 0;
}