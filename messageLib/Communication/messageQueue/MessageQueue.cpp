#include "MessageQueue.h"

key_t MessageQueue::generateMsgKey() {
    msgKey = ftok("msgQueue", 26);
    return msgKey;
}

void MessageQueue::sendMessage(Message &message) {
    key_t key = generateMsgKey();
    int msgId = msgget(key, 0666 | IPC_CREAT);
    message.setMessageId(msgId);

    message.setSender("MeoMeo");
    message.setRecipient("GoGo");

    msgsnd(msgId, &message, sizeof(message), 0);

}


