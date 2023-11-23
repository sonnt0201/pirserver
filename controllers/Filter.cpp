#include "Filter.hpp"

bool filter(Request request) {
    // request
    if (request.method() == POST){
        //filter goes here
        std::string voltageStr = request.value("vol");

        // TO-DO: check the voltageStr

        //return
        return false;
    }

    // Default: 
    return true;
}