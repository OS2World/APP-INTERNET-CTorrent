#include <sys/types.h>

#include "connect_nonb.h"
#ifdef __OS2__

#include <nerrno.h>
int connect_nonb(SOCKET sk,struct sockaddr* psa)
{
  int r;
  r = connect(sk,psa,sizeof(struct sockaddr));
  if(r < 0)
  {
    int ierr;
    ierr = sock_errno();
    if(ierr == SOCEINPROGRESS) r = -2;
  }
  return r;
}

#else

#include <errno.h>

// 返回值
// >0 连接已成功
// -1 连接已失败
// -2 连接正在进行
int connect_nonb(SOCKET sk,struct sockaddr* psa)
{
  int r;
  r = connect(sk,psa,sizeof(struct sockaddr));
  if(r < 0 && errno == EINPROGRESS) r = -2;
  return r;
}

#endif
