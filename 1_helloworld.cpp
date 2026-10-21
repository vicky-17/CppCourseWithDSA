#include <iostream>
// "#include" is pre-processor, and "<iostream>" is header

int main(){
    std::cout << "I like Pizza!" <<std::endl; // std::endl means new line. and it flushes the output buffer.
    std::cout << "It's a good day to eat Pizza!" << '\n'; /* '\n' means new line. but it doesn't flush the output buffer. 
        It is faster than std::endl. 
        So, use '\n' instead of std::endl if you don't want to flush the output buffer.
        and better performance wise.
    */

    // Comments are ignored by compiler

    /* OUTPUT BUFFER:
     ----------------
        ->


    */

//-----------------------------------------------------------------------------------------------------------
    // VARIABLES : two steps to create a variable i.e. declaration and assignment.

    //integer (whol number)
    int age = 25;  
    int years = 2023;
    int days = 7.5;

    std::cout << "integer : " << days << std::endl;

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    //single character 
    char grade = 'A';
    char initial = 'C'; // If you put two charchater it overflows to show only last one. try 'BC' insteed of 'C'.

    std::cout << "character : " << initial<< std::endl;

    //boolean (true or false)
    bool student = false;
    bool power = true;

    //String (object that represents a sequence of text)
    // String is provideed from standard namespace.
    std::string name ="Bro";
    std:: string day = "Friday";
    std::string food = "Pizza";
    std::string address = "123 Fake st.";

    std::cout << "Hello " << name << "\n";

//-----------------------------------------------------------------
    // The "const" keyword specifies that a variable's value is constant
    // tells the compiler to prevent anything from modifying it
    // (read-only)

    const double PI = 3.14159; // for constant variable use all upper-case variable name
    double radius = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference << "cm" << "\n";


    




    return 0; // "return 0" means no problem, "return 1" means have problem.
}