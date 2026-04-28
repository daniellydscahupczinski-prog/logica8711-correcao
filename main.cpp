#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int numero, tentativa;

    for(int i = 0; i < 10; i++){
        if(i == 4){
            break;
        }
        std::cout<<i<<std::endl;
    }
    return 0;
}