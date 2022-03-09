#include <iostream>
#include <iterator>
#include <WS2tcpip.h>
#include <fstream>
#include <vector>
#pragma comment(lib, "ws2_32.lib")
#include <string>
using namespace std;

int main(){
    //Getting file BS
    
    std::ifstream input("sus.bin", std::ios::binary);
    vector <unsigned char> bytes((std::istreambuf_iterator<char>(input)),
         (std::istreambuf_iterator<char>()));
    input.close();

    cout << "a";
    cout << int(bytes[0]) << " " << int(bytes[1]) << " " 
    << int(bytes[bytes.size() - 1]) << " " <<  int(bytes[bytes.size() - 2]);

    //sending BS

    string ip = "dmei.ru";
    int port = 58081;
    

    WSAData data;
    WORD ver = MAKEWORD(2, 2);
    int wsRes = WSAStartup(ver, &data);
    if(wsRes != 0)
        cout << "Error on strartup " << wsRes << endl;
    
    SOCKET sock = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in hint;
    hint.sin_family = AF_INET;
    hint.sin_port = htons(port);

    inet_pton(AF_INET, ip.c_str(), &hint.sin_addr);
    
    while(connect(sock, (sockaddr*)&hint, sizeof(hint)) == SOCKET_ERROR){

    }
    cout << "connected" << endl;
    char buffer[4096];
    ZeroMemory(buffer, 4096);
    send(sock, (char *)&bytes, 4096, 0);
    
    while(true){
        if(recv(sock, buffer, 4096, 0)){
            cout << buffer << "";
        }
    }


    return 0;
}