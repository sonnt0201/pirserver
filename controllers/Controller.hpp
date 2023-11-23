#include "../models/Request.hpp"
#include "../models/Response.hpp"
#include "../models/PIRDB.hpp"
#include <string>
#pragma once

std::string toJson(std::vector<std::vector<std::string>> data);

/*
    Controller knows nothing about server, just uses Resquest and Response
*/
void controller(SOCKET client, Request request);
