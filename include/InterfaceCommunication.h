#ifndef INTERFACECOMMUNICATION_H
#define INTERFACECOMMUNICATION_H

#pragma once

#include <string>

using namespace std;

class InterfaceCommunication
{
public:
    virtual void SendEmail(string Title, string Body) = 0;
    virtual void SendFax(string Title, string Body) = 0;
    virtual void SendSMS(string Title, string Body) = 0;

    virtual ~InterfaceCommunication() {}
};

#endif //INTERFACECOMMUNICATION_H
