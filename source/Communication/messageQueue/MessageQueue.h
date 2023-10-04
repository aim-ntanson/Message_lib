
#ifndef _MESSAGEQUEUE_H
#define _MESSAGEQUEUE_H

#include "CommunicationMethod.h"
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>

class MessageQueue : public CommunicationMethod {
public:
    void sendMessage(Message& message) override;
    Message& receiveMessage() override;

private:
    key_t msgKey;
};


#endif //_MESSAGEQUEUE_H
