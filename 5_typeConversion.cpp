#include <iostream>

using namespace std;

int main (){
    // type conversion = conversion a value of one data type to another 
    //                   Implicit = automatic
    //                   Explicit = Precede value with new data type (int)


    //Implicit
    int x = 3.14;
    cout << x << endl;

    //Explicit
    double y = (int) 3.14; 
    cout << y;

    return 0;
}   