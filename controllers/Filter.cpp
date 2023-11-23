#include "Filter.hpp"

bool filter(Request request) {
    std::cout<<"on filter... \n";
    // request
    if (request.method() == POST ){
        //filter goes here
        std::string voltageStr = request.value("vol");
        std::cout<<"filter goes here"<<std::endl;
        // TO-DO: check the voltageStr

        //return
        return false;
    }

    // Default: 
    return true;
}