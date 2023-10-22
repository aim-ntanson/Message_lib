//
// Created by aimsern on 27-Sep-23.
//

#ifndef MESSAGE_LIB_MESSAGE_H
#define MESSAGE_LIB_MESSAGE_H
#include <string>
#include <utility>
#include <vector>

class messageInfo {
public:
    messageInfo() {

    }

    void setNumber(int& num) {
        number = num;
    }

    int getNumber() {
        return number;
    }

private:
    int number;

};

class Message {
public:
    Message() {
        messageId = 0;
    }

    int getMessageId() const {
        return messageId;
    }

    void setMessageId(int& id)
    {
        messageId = id;
    }

    void setSender(const std::string& name)
    {
        sender = name;
    }

    void setRecipient(const std::string& name) {
        recipient = name;
    }

private:
    int     messageId;
    std::string sender;
    std::string recipient;
    //todo: add messageInfo& messageInfo;

};





#endif //MESSAGE_LIB_MESSAGE_H
