#include "Controller.hpp"

PIRDB db = PIRDB("esp32.db");

std::string toJson(std::vector<std::vector<std::string>> str)
{
    std::string json = "{";
    for (long i = 0; i < str.size(); i++)
    {
        json += '\"' + str[i][0] + "\":" + '\"' + str[i][1] + '\"' + ",";
    }
    json += "},";
};

void controller(SOCKET client, Request request)
{

    if (request.method() == 1)
    {
        std::string espId = request.value("esp-id"),
                    vol = request.value("vol"),
                    time = request.value("time");

        if (espId == "" || vol == "" || time == "")
        {
            std::cout << "Request param value error"
                      << "\n";
            std::cout << "Request raw text: \n"
                      << request.getText() << "\n\n";
        }

        int rc = db.addData(std::stoi(espId), vol, std::stoi(time));
        // init a response object
        if (rc != SQLITE_DONE)
        {
            Response response = Response(500, "text/plain");
            response.body = "Failed to saving data !";
            response.sendClient(client);
        }
        else
        {
            Response response = Response(200, "text/plain");
            response.body = "Data saved sucessfully";
            response.sendClient(client);
        }

        // send

        return;
    }

    if (request.method() == 0 && request.path() == "/")
    {
        Response response = Response(200, "text/html");
        response.setHtmlContent("index.html");
        // printf("%s\n",response.rawText();
        response.sendClient(client);
        return;
    }

    // if (request.method() == 0 && request.path() == "/api")
    // {
    //     Response response = Response(200, "application/json");
    //     int numRows = db.numOfRows();
    //     std::string body = "{";
    //     std::vector<std::string> data = db.getDataWithID(1);

    //     for (long i = 1; i <= numRows; i++)
    //     {
    //         std::vector<std::string> data = db.getDataWithID(numRows);
    //         body += toJson({
    //             {"id", std::to_string(i)}, 
    //             {"esp_id", data[1]},
    //             {"voltage", data[2]},
    //             {"time", data[3]}
    //             });
            
            
    //     }
    //     body += "}";
    //     response.body = body;
    //     response.sendClient(client);
    //     return;
    // }
}