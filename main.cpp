#include "Metaphone.h"
#include<string>

int main(){
    std::string s("Gustavo Rodrigues Coelho");
    Metaphone m(s);    
    std::cout << m.get_transformed() << std::endl;
    return 1;
}
