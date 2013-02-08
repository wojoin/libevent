#include <winsock2.h>
#include <windows.h>

#include <stdlib.h>
#include <stdio.h>

#include "event2/util.h"
#include "event2/thread.h"

#define E(x) printf (#x " -> \"%s\"\n", evutil_socket_error_to_string (x));

int main (int argc, char **argv)
{
  evthread_use_windows_threads ();

  E(WSAEINTR);
  E(WSAEACCES);
  E(WSAEFAULT);
  E(WSAEINVAL);
  E(WSAEMFILE);
  E(WSAEWOULDBLOCK);
  E(WSAEINPROGRESS);
  E(WSAEALREADY);
  E(WSAENOTSOCK);
  E(WSAEDESTADDRREQ);
  E(WSAEMSGSIZE);
  E(WSAEPROTOTYPE);
  E(WSAENOPROTOOPT);
  E(WSAEPROTONOSUPPORT);
  E(WSAESOCKTNOSUPPORT);
  E(WSAEOPNOTSUPP);
  E(WSAEPFNOSUPPORT);
  E(WSAEAFNOSUPPORT);
  E(WSAEADDRINUSE);
  E(WSAEADDRNOTAVAIL);
  E(WSAENETDOWN);
  E(WSAENETUNREACH);
  E(WSAENETRESET);
  E(WSAECONNABORTED);
  E(WSAECONNRESET);
  E(WSAENOBUFS);
  E(WSAEISCONN);
  E(WSAENOTCONN);
  E(WSAESHUTDOWN);
  E(WSAETIMEDOUT);
  E(WSAECONNREFUSED);
  E(WSAEHOSTDOWN);
  E(WSAEHOSTUNREACH);
  E(WSAEPROCLIM);
  E(WSASYSNOTREADY);
  E(WSAVERNOTSUPPORTED);
  E(WSANOTINITIALISED);
  E(WSAEDISCON);
  E(WSATYPE_NOT_FOUND);
  E(WSAHOST_NOT_FOUND);
  E(WSATRY_AGAIN);
  E(WSANO_RECOVERY);
  E(WSANO_DATA);

  return EXIT_SUCCESS;
}
