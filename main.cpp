#include <iostream>

void executeAlgorithms(unsigned int input){
    while(true){
        std::cout << input << " ";

        if(input == 1){
            return;
        }
        else{
            if(input % 2 != 0)
                input = 3*input+1;
            else
                input = input/2;
        }
    }
}

int main(){
    for(unsigned int i = 2; i < 50; i++){
        std::cout << "\n\nNew round with input: " << i << std::endl;
        executeAlgorithms(i);
    }

    return 0;
}