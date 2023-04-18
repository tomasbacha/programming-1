#include <iostream>
using namespace std;

int main()
{
    int x = 2;
    int y = 3;
    
    switch (x)
    {
        case 1:
            cout << "x is 1" << endl;
            break;
        case 2:
            switch (y)
            {
                case 2:
                    cout << "x is 2 and y is 2" << endl;
                    break;
                case 3:
                    cout << "x is 2 and y is 3" << endl;
                    break;
            }
            break;
        case 3:
            cout << "x is 3" << endl;
            break;
            case 4:
            cout<<"y is 4"<<endl;
            break;
    }
    
    
    return 0;
}
