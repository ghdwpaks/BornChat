#include <iostream>
#include <sys/socket.h>

#define PORT 9999
#define MAXIMUN_LENGTH 8
#define MAX_BUFF 512

using namespace std;

/***
   * return sucess => 1 || faild => 0
   */
int main(int argc, char const *argv[]) {
	int server, connect;
	struct sockaddr_in address;
	char rBuff[] = {0}; // recive Buffer
	
	/***
	   * TCP => SOCK_STREAM
	   * UDP => SOCK_DGRAMA
	   * IPv4 Protocol => AF_INET
	   * IPv6 Protocol => AF_INET6
	   */
	if( (server = socket(AF_INET, SOCK_DGRAM, 0)) < 0 )
	if( (connect = bind(server, (struct sockaddr *) &address, sizeof(address))) < 0 )
	if( listen(server, MAXIMUN_LENGTH) < 0 )
		return 0; //could not create server

		
		
	return 1;
}
