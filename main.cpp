#include <iostream>
using namespace std ;
int main() {
    float weight, bmi, height;
    cout << "Enter your weight in Kg :";
    cout << "new branch";
    cin >> weight;
    cout << "Enter height in centimeters :";
     cin >> height;
     height = height/100;
     height = height * height;
    bmi = weight/height;
    cout << bmi;

    return 0;
}
