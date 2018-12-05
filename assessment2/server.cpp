/*
  *createDate: 2018-11-29
  *author: dingzhijian
  *"server.cpp"
 */

#include "head.h"
typedef struct in_addr  {
  in_addr_t s_addr;
}
typedef  struct sockaddr_in{
  uint8_t sin_len;//length of address
  sa_family_t sin_family;
  in_port_t sin_port;//port
  struct in_addr sin_addr;//IP address
  char sin_zero[8];
}
int main(int argc, char *argv[])
{
  int sockfd = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  //int famliy, int type,int protocol
  //make byte into socket
  sockaddr_in serverAddress;
  int len = sizeof(serverAddress.sin_zero) / sizeof(serverAddress.sin_zero[0]);
  memset(sin_zero, 0, len);
  ServerAddress.sin_port = htons(4000);//port = 4000
  ServerAddress.sin_addr.s_addr = htonl(INADDR_ANY);//common address set 0
  int bindstatus = bind(sockfd, serverAddress, serverAddress.sin_len );
  int slisten = listen(sockfd,3);
  int accstatus = accept(sockfd, serverAddress, ServerAddress.sin_len);

  return 0;
}
