#include <iostream> 
// using namespace std;

int main () {

    char string [] = "bar";

    int n;

    if (n < 50) {
        std::cout << "il " << string << " è libero" << std::endl;
    }
    if (n == 50) {
        std::cout << "il " << string << " è tutto occupato" << std::endl;
    }
    if (n > 50) {
        std::cout << "il " << string << " è strapieno di gente" << std::endl;
    }

    return 0;

}