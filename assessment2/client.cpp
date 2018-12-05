#include "head.h"
typedef struct in_addr{
  in_addr_t  s_addr ;
}

typedef struct sockaddr_in{
  unit8_t sin_len;
  sa_family_t sin_family;
  in_port_t sin_port;
  struct in_addr;
  char sin_zero[8];
}

int main(int argc, char *argv[])
{
  
  return 0;
}
