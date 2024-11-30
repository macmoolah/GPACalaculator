#include <iostream>
#include "GpaCalc.h"
#include <string>

using namespace std;

double FindUnweighted(double grades[], int classNum) {
double z = 0;
for (int i = 0; i < classNum; i++) {


// Getting class gpas
if (grades[i] >= 93) {
z += 4.0;
} else if (grades[i] >= 90) {
z += 3.7;
} else if (grades[i] >= 87) {
z += 3.3;
} else if (grades[i] >= 83) {
z += 3.0;
} else if (grades[i] >= 80) {
z += 2.7;
} else if (grades[i] >= 77) {
z += 2.3;
} else if (grades[i] >= 73) {
return 2.0;
} else if (grades[i] >= 70) {
z += 1.7;
} else if (grades[i] >= 67) {
z += 1.3;
} else if (grades[i] >= 63) {
z += 1.0;
} else if (grades[i] >= 60) {
z += 0.7;
} else {
z += 0;
}


}

return z/classNum;




}


double FindWeighted(double grades[], int classNum, string type[]) {
double z = 0;
for (int i = 0; i < classNum; i++) {


// Getting class gpas
if (grades[i] >= 93) {
if (type[i] == "1" || type[i] == "Regular") {
z += 4.0;
} else if (type[i] == "2" || type[i] == "Honors") {
z += 4.5;
} else if (type[i] == "3") {
z += 5.0;
}



} else if (grades[i] >= 90) {
if (type[i] == "1" || type[i] == "Regular") {
z += 3.7; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += 3.7 + 0.5;
} else if (type[i] == "3" || type[i] == "AP") {
z += 3.7 + 1;
}





} else if (grades[i] >= 87) {
if (type[i] == "1" || type[i] == "Regular") {
z += 3.3; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += 3.3 + 0.5;
} else if (type[i] == "3" || type[i] == "AP") {
z += 3.3 + 1;
}

} else if (grades[i] >= 83) {
if (type[i] == "1" || type[i] == "Regular") {
z += 3.0; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += 3.0 + 0.5;
} else if (type[i] == "3" || type[i] == "AP") {
z += 3.0 + 1;
}

} else if (grades[i] >= 80) {
if (type[i] == "1" || type[i] == "Regular") {
z += 2.7; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += 2.7 + 0.5;
} else if (type[i] == "3" || type[i] == "AP") {
z += 2.7 + 1;
}

} else if (grades[i] >= 77) {
if (type[i] == "1" || type[i] == "Regular") {
z += 2.3; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += 2.3 + 0.5;
} else if (type[i] == "3" || type[i] == "AP") {
z += 2.3 + 1;
}

} else if (grades[i] >= 73) {
if (type[i] == "1" || type[i] == "Regular") {
z += 2.0; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += 2.0 + 0.5;
} else if (type[i] == "3" || type[i] == "AP") {
z += 2.0 + 1;
}

} else if (grades[i] >= 70) {
if (type[i] == "1" || type[i] == "Regular") {
z += 1.7; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += 1.7 + 0.5;
} else if (type[i] == "3" || type[i] == "AP") {
z += 1.7 + 1;
}

} else if (grades[i] >= 67) {
if (type[i] == "1" || type[i] == "Regular") {
z += 1.3; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += 1.3 + 0.5;
} else if (type[i] == "3" || type[i] == "AP") {
z += (1.3 + 1);
}

} else if (grades[i] >= 63) {
if (type[i] == "1" || type[i] == "Regular") {
z += 1.0; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += (1.0 + 0.5);
} else if (type[i] == "3" || type[i] == "AP") {
z += (1.0 + 1);
}

} else if (grades[i] >= 60) {
if (type[i] == "1" || type[i] == "Regular") {
z += 0.7; 
} else if (type[i] == "2" || type[i] == "Honors") {
z += (0.7 + 0.5);
} else if (type[i] == "3" || type[i] == "AP") {
z += (0.7 + 1);
}

} else {
z += 0;
}

}
return z/classNum;

}

 

