#include "Response.hpp"

Response::Response(int status, std::string contentType) {
    switch (status)
    {
    case 200:
        this->statusCode = "200 OK";
        break;
    case 404:
        this->statusCode = "404 Not Found";
        break;
    default:
        this->statusCode = "500 Internal Server Error";
        break;
    }

    this->contentType = contentType;    
}

char* Response::rawText() {
    std::string header = "HTTP/1.1 " + statusCode + "\n" + this->contentType + "\n\n";
    
    std::string text = header + this->body;

    // char* chartext = text.c_str();
    return (char*) text.data();
}

void Response::sendClient(SOCKET client) {
    char* text = this->rawText();
     send(client, text, strlen(text), 0);
}