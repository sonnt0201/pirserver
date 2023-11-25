#include "Filter.hpp"

bool filter(Request request)
{
    std::cout << "on filter... \n";
    // request
    if (request.method() == POST)
    {
        std::cout<<request.getText()<<std::endl;
        // filter goes here
        std::string voltageStr = request.value("vol"),
                    idStr = request.value("esp-id"),
                    timeStr = request.value("time");


        // check empty string
        if (voltageStr == "" || idStr == "" || timeStr == "") {std::cout<<"null \n" ; return 0;}

        // check unsigned
        for (char c : idStr) if (c < '0' || c > '9') return 0;
        for (char c : timeStr) if (c < '0' || c > '9') return 0;

        std::cout<<voltageStr<<std::endl;
        int count = 0;
        for (long i = 0; i < voltageStr.length(); i++)
        {

            // check number and '+'
            if ((voltageStr[i] < '0' || voltageStr[i] > '9') && (voltageStr[i] != '+'))
                {return 0;}

            if (voltageStr[i] != '+')
                count++;
            else
                count = 0;

            if (count > 4)
                return 0;
        }

        
    }
    
    std::cout<<"Filter: accepted!"<<std::endl;
    // Default:
    return true;
}