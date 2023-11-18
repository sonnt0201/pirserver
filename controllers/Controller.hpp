#include "../models/Request.hpp"
#include "../models/Response.hpp"


#pragma once

/*
    Controller knows nothing about server, just uses Resquest and Response
*/
void controller(SOCKET client, Request request);