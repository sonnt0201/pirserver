#include "Filter.hpp"

bool filter(Request request)
{
    std::cout << "on filter... \n";
    // request
    if (request.method() == POST)
    {
        // filter goes here
        std::string voltageStr = request.value("vol"),
                    idStr = request.value("esp-id"),
                    timeStr = request.value("time");


        // check empty string
        if (voltageStr == "" || idStr == "" || timeStr == "") return 0;

        // check unsigned
        if (stoi(idStr) <= 0 || stoi(timeStr) <= 0) return 0;

        int count = 0;
        for (long i = 0; i < voltageStr.length(); i++)
        {

            // check number and '+'
            if ((voltageStr[i] < '0' || voltageStr[i] > '9') && (voltageStr[i] != '+'))
                return 0;

            if (voltageStr[i] != '+')
                count++;
            else
                count = 0;

            if (count > 4)
                return 0;
        }

        
    }

    // Default:
    return true;
}