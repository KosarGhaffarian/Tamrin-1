#include <iostream>

using namespace std;

int main()
{
    int a,b,c;

    cout << "andazeye zel 1 ra vared konid." << endl;
    cin >> a;
    cout << "andazeye zel 2 ra vared konid." << endl;
    cin >>  b;
    cout << "andazeye zel 3 ra vared konid." << endl;
    cin >> c;


    if((b+c)>a)
    {
        if((a+c)>b)
        {
            if((a+b)>c)
            {
                cout<< "____true____";
            }
            else
            {
                cout <<"____false____";
            }

        }
        else
        {
            cout <<"____false____";
        }
    }
    else
    {
        cout <<"____false____";
    }
    return 0;
}
