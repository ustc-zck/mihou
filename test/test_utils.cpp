#include "../src/utils.h"
#include <iostream>

//g++ -o test_utils test_utils.cpp ../src/utils.cpp 

int main(){
    //auto result = SplitStr("\tPUT\tHELLO\tWORLD\t", '\t');
    // auto result = SplitStr("test", '\t');

    // //auto result = SplitStr("PUT\tHELLO\tWORLD\t", '\t');
    // for(auto item : result){
    //     std::cout << item << "\t";
    // }
    // std::cout << std::endl;
    
    std::string resp = "0\tTRUE\t";
    std::cout << "resp is " << resp << std::endl;
    std::vector<std::string> items = SplitStr(resp, '\t');
    if(items.size() == 2){
        if(items[1] == "TRUE"){
            std::cout << std::stoull(items[0]) << std::endl;
        } else{
            std::cout << std::stoull(items[0]) << std::endl;
        }
    }
    return 0;
}