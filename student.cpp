#include <iostream>
#include <math.h>
#include <string.h>


using namespace std;

int main()
{
    string fname,lname;
    float a,avg,sum;
    sum=0;

    cout << "Plese enter your firstname==> " ;
    cin >> fname;
    cout << "Plese enter your lastname==> " ;
    cin >> lname;

    for (int i=1 ; i<=3 ; i++)
    {
        cout << "enter the score of lesson "<< i << "==> " ;
        cin >> a ;

        sum += a;
    }


    avg = sum/3;

    cout << "avg==> " << avg<< endl;


    if (avg>=17)
        cout << endl << "___Great___";

    if (avg>=12 && avg <17)
        cout << endl << "___Normal ___";

    if (avg<12)
        cout << endl << "___Fail___" << endl<<endl<<endl;

    return 0;
}
