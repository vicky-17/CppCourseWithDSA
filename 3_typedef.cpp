#include <iostream>
#include <vector>

typedef std::string text_t;  //use "_t" to name the typedef variable datatype
typedef std::vector<std::pair<std::string, int >>pairlist_t;
typedef int number_t; 
//-----------------------------------
using name_t = std::string;
using age_t = int;

int main(){

    //typedef = reserved keyword used to create an addtional name
    //          (alias or nickname)for another data type.
    //          New indentifier for an existing type
    //          Helps with readbility and redurces typos
    //          Use when there is a clear benefit
    //          Replced with 'using' (work better w/ templates)

    // string firstName = "Bro"
    text_t firstName = "Bro";

    // std::vector<std::pair<std::string, int >> pairlist;
    pairlist_t pairlist;

    std::cout << firstName << '\n';

//------------------------------------------------
    // insteed of 'typedef' , we are using 'using'
    // it is the better way
    name_t name ="Code";
    age_t age = 21;

    
    std::cout << name << '\n' << age << std::endl;

    return 0;

}