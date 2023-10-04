
#ifndef _COMMUNICATIONMETHOD_H
#define _COMMUNICATIONMETHOD_H

#include "Message.h"

class CommunicationMethod {
public:
//    void selectMethod(method method);
    virtual void sendMessage(Message& message) = 0;
    virtual Message& receiveMessage() = 0;

private:
    enum method {
        MESSAGE_QUEUE,
        NAME_PIPE,
        SHARE_MEMORY
    };
};


#endif //_COMMUNICATIONMETHOD_H
