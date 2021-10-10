#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float weight, height, BMI;
    cout << "Please enter your weight in Kilograms==> " ;
    cin >> weight;
    cout << "Please enter your height in Metres==> " ;
    cin >> height;


    BMI = weight / pow(height,2);


    if (BMI < 18.5 )
    {
        cout << endl << "______you're underweight______"<< endl ;
    }
    else if (BMI >= 18.5 && BMI <= 24.9  )
    {
        cout << endl << "______you're normal______"<< endl ;
    }

    else if (BMI >= 25 && BMI <= 29.9 )
    {
        cout << endl << "______you're overweight______"<< endl ;
    }

    else if (BMI >= 30 && BMI <= 34.9 )
    {
        cout << endl << "______you're obese______"<< endl ;
    }

    else if (BMI >= 35 )
    {
        cout << endl << "______you're extremely obese______"<< endl ;
    }


    return 0;
}
