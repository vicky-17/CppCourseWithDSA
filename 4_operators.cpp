#include <iostream>

int main(){
    //arithmatic operators = return the result of specific 
    //                       arithmatic operation (+ - * / %)

    int students = 20;
    
    // students = students + 1;
    // students+=2;
    // students++;

    // students = students - 1;
    // students-=1;
    // students--;

    // students = students * 2;
    // students*=2;

    // students = students / 2;
    // students/=3;

    int remainder = students % 3;


    std::cout << students << '\n';

    std::cout << remainder<< '\n';


    // Order of Precedence of arithmatic operator
    //  1st -> Parenthesis
    //  2nd -> Multiplication & Division
    //  3rd -> Addition & Subtraction
    
    int age = 6 - 5 + 4 * 3 / 2;

    std::cout << age << '\n';


    return 0;
}