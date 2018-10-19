Client-Server program using socket programming in C

## Overview

Implement the following programs on any Linux OS of your choice:
1. A socket based server that allows 2 clients to be connected. The server can receive messages from the clients. When it receives a message from one client then it should forward the message to the other client. Additionally, the server should have the ability randomly drop messages received from a client. The server cannot tell the clients that it dropped the message. 

2. A socket based client application. You can run 2 instances of the application from different terminal windows. The clients should connect to the server. After connecting, the user can type messages on the terminal window. A message is finished when the user presses enter key. The client sends this message to the server. Provide ability to send multiple messages one after another. As mentioned in the description of the server program, the messages can be dropped randomly by the server and the client has no idea as to which message was dropped. So, you have to implement reliability in the client program so that it can detect that a message has been dropped and it can resend that message. All the messages typed by the user on one terminal should appear on the terminal of the other client in the same order in which they were typed by the user. You can implement features like sequence numbers, send buffering, receive buffering, transmission timeout etc to achieve reliability.


## Partial Implementation Description

Server is multi threaded and keep information of active receivers' port number for send mode client to communicate.

A TCP client-server application flow.

#Server: Run the server
#Client: Run the client
	1.	Enter the mode (send or receive)
	2.	For receiver mode client, it always waiting for sender and once sender send message it receive the message untill the sender terminate. After that receiver also terminate
	3.	For sender mode client, if there is no actice receiver then sender client terminate. If there is a active receiver then sender client select port of receiver to send message and start sending message

## Area of improvement

1. Use lock for global share data
2. Apply error checking for each and every api/function used and also if there any user define function then define error code for it and return that error code
3. Verify the send and recv api use same length data to transfer as message
4. At server side use doubly link list to store receiver's information

## Part to implement

1. Mechanism to store sender client's information at server side
2. Sliding window type mechanism for message receive or not at sender and receicver client. Also need buffer tp store a number of messages(window size)
3. Implent the method how receiver inform the client for missing message
4. Instead of port number used to select receiver use user name of receiver which is simple.

## Compilation

Server proram:
$gcc server.c -lpthread -o server.out -Wall

Client program:
$gcc client.c -o client.out -Wall

## output snap

Client 1 (sender):

gaurang@gaurang-sibshivalik-com:~/client-server-client/client$ make
gcc ./src/client.c -o ./bin/client.out -Wall
./bin/client.out

Select the operation: 1. To send || 2. To receive : 1
Available reciever:
51216

Select receiver to send : 51216

Enter message to send or press "CNTR+D" to stop sending
India is great country because of its diversity
Hardware speaks using C language
This is third and last message


Client 2 (receiver):

gaurang@gaurang-sibshivalik-com:~/client-server-client/client$ make
gcc ./src/client.c -o ./bin/client.out -Wall
./bin/client.out

Select the operation: 1. To send || 2. To receive : 2
Waiting for messasge

Message receive is : India is great country because of its diversity
Message receive is : Hardware speaks using C language
Message receive is : This is third and last message


Server
gaurang@gaurang-sibshivalik-com:~/client-server-client/server$ make
gcc ./src/server.c -o ./bin/server.out -pthread -Wall
./bin/server.out

## Author

Gaurang Rathod

## Acknowledgment

* Narender for reviewing and suggestions.
