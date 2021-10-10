#include <iostream>
#include <string.h>
#include <math.h>


using namespace std;

int main()
{
    float number1, number2, answer,ansr1,ansr2;
    string op;

    cout << "Enter number 1 ==> " ;
    cin >> number1;
    cout << "Enter number 2 ==> " ;
    cin >> number2;

    cout << "Choose the operator(+ , - , / , * , sin , Radical , cos , cot , tan , factorial)==> ";
    cin >> op;


    if( op == "+")
    {
        answer = number1 + number2 ;
        cout << endl <<"answer is ==>  " << answer << endl << endl;
    }


    else if( op == "-")
    {
        answer = number1 - number2 ;
        cout << endl <<"answer is ==>  " << answer << endl << endl;
    }


    else if( op == "/" )
    {

        answer = number1 / number2 ;
        if(answer != 0)
        {
            cout << endl <<"answer is ==>  " << answer << endl << endl;
        }
        else cout <<"wrong validation" << endl;
    }


    else if( op == "*")
    {
        answer = number1 * number2 ;
        cout << endl <<"answer is ==>  " << answer << endl << endl;
    }



    else if( op == "Radical")
    {
        ansr1 = sqrt(number1) ;
        ansr2 = sqrt(number2);
        cout << endl <<"answer 1 is ==>  " << ansr1 << endl << endl;
        cout << endl <<"answer 2 is ==>  " << ansr2 << endl << endl;
    }


    else if( op == "sin")
    {
        number1 = number1 * M_PI / 180;
        number2 = number2 * M_PI / 180;
        ansr1 = sin(number1) ;
        ansr2 = sin(number2);
        cout << endl <<"answer 1 is ==>  " << ansr1 << endl << endl;
        cout << endl <<"answer 2 is ==>  " << ansr2 << endl << endl;
    }

    else if( op == "cos")
    {
        number1 = number1 * M_PI / 180;
        number2 = number2 * M_PI / 180;
        ansr1 = cos(number1) ;
        ansr2 = cos(number2);
        cout << endl <<"answer 1 is ==>  " << ansr1 << endl << endl;
        cout << endl <<"answer 2 is ==>  " << ansr2 << endl << endl;
    }



    else if( op == "cot")
    {
        number1 = number1 * M_PI / 180;
        number2 = number2 * M_PI / 180;
        ansr1 = cos(number1)/sin(number1) ;
        ansr2 = cos(number2)/sin(number2);
        cout << endl <<"answer 1 is ==>  " << ansr1 << endl << endl;
        cout << endl <<"answer 2 is ==>  " << ansr2 << endl << endl;
    }


    else if( op == "tan")
    {
        number1 = number1 * M_PI / 180;
        number2 = number2 * M_PI / 180;
        ansr1 = sin(number1)/cos(number1) ;
        ansr2 = sin(number2)/cos(number2);
        cout << endl <<"answer 1 is ==>  " << ansr1 << endl << endl;
        cout << endl <<"answer 2 is ==>  " << ansr2 << endl << endl;
    }


    else if( op == "factorial")
    {
        ansr1 = 1;
        for(int i=1 ; i<= number1 ; i++)
        {
            ansr1 *= i;
        }
        cout << endl <<"answer 1 is ==>  " << ansr1 << endl << endl;

        ansr2 = 1;
        for(int j=1 ; j<= number2 ; j++)
        {
           ansr2 *= j;
        }
        cout << endl <<"answer 2 is ==>  " << ansr2 << endl << endl;
    }


    return 0;
}
