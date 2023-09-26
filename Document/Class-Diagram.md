# Class Diagram
## Message Info
```plantuml
class Message {
  messageId: uint8_t
  sender: std::string
  recipient: std::string
  vector<messageInfo> messageInfo
  
  Message()
  void setSender(const string& name)
  void setRecipient(const string& name)
  void addMessageInfo(const messageInfo& info)
}
class messageInfo {
   int number
   
   messageInfo()
   void setNumber(int& num)
   int getNumber()
}

```

## Communicate Method
```plantuml
skinparam groupInheritance 3
communicateMethod <|-- messageQueue
communicateMethod <|-- namePipe
communicateMethod <|-- shareMemory

class communicateMethod {
    enum {messageQueue, namePipe,shareMemory}
    
    void selectMethod(method& method)
    void sendMessage(Message& message)
    Message& receiveMessage()
}
class messageQueue {
    
    void sendMessage(Message& message)
    Message& receiveMessage()
}
class namePipe {
    
    void sendMessage(Message& message)
    Message& receiveMessage()
}
class shareMemory {
    
    void sendMessage(Message& message)
    Message& receiveMessage()
}
```

## User Interface
```plantuml
class consoleInterface {
    userName
    
    string& getUserInput()
    displayMessage(Message& message)
}

class client {
    communicateMethod   method
    
    sendMessage(message)
    receiveMessage()
    setCommunicateMethod()
}

class server {
    clients
    
    
}
```
## ErrorHandling Class
## Documentation Class
