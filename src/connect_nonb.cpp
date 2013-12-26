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

// ����ֵ
// >0 �����ѳɹ�
// -1 ������ʧ��
// -2 �������ڽ���
int connect_nonb(SOCKET sk,struct sockaddr* psa)
{
  int r;
  r = connect(sk,psa,sizeof(struct sockaddr));
  if(r < 0 && errno == EINPROGRESS) r = -2;
  return r;
}

#endif
