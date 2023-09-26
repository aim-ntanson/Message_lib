//
// Created by aimsern on 27-Sep-23.
//

#ifndef MESSAGE_LIB_MESSAGE_H
#define MESSAGE_LIB_MESSAGE_H
#include <string>
#include <vector>

class messageInfo {
public:
    messageInfo();

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

    setSender(const std::string& name)
    {
        sender = name;
    }

private:
    uint8_t     messageId;
    std::string sender;
    std::string recipient;
    time_t      timeStamp;
    std::vector<messageInfo> messageInfo;

};





#endif //MESSAGE_LIB_MESSAGE_H
