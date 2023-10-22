#ifndef MESSAGEQUEUE_H
#define MESSAGEQUEUE_H

#include "../CommunicationMethod.h"
#include <cstdio>
#include <sys/ipc.h>
#include <sys/msg.h>

class MessageQueue : public CommunicationMethod {
public:
    void sendMessage(Message& message) override;
    Message& receiveMessage() override;
    key_t generateMsgKey();

private:
    key_t msgKey;

};


#endif //MESSAGEQUEUE_H
