#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <netinet/in.h>

int main(){
    int tcp_socket = socket(AF_INET, SOCK_STREAM, 0);
    printf(tcp_socket);
    return 0;
}
