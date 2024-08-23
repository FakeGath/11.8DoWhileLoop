
//Library that includes basic c++ commands
#include <iostream>

int main(){

    //Print out 10 time "I love c++"

    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    std::cout<<"I love c++"<<std::endl;
    
    std::cout<<"------------------------------------------"<<std::endl;
    const size_t COUNT{0};
    size_t i {0};
    do  
    {
       std::cout<<i+1<<". I love c++"<<std::endl;
       ++i;
    } while (i<COUNT);
    std::cout<<"LOOP COMPLETED!!!"<<std::endl;

    return 0;
}