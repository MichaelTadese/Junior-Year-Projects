#include <iostream>
using namespace std;
int main()
{
    double heightinches, heightmeters, weightpounds, weightkilograms, BMI;
    cout << "Input Height in inches and Weight in pounds to find the BMI of the individual." << endl;
    cin >> heightinches;
    cin >> weightpounds;
    heightmeters = heightinches * 0.0254;
    weightkilograms = weightpounds * 0.45359237;
    BMI = weightkilograms / (heightmeters * heightmeters);
    if (BMI < 18.5)
        cout << "Underweight" << endl;
    else if (18.5 <= BMI && BMI < 25.0)
            cout << "Normal" << endl;
    else if (25.0 <= BMI && BMI < 30.0)
            cout << "Overweight" << endl;
    else if (30.0 <= BMI)
            cout << "Obese" << endl;
}
