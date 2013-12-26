#ifndef SIGINT_H
#define SIGINT_H

#if defined(__OS2__)
extern "C" void sigint_catch(int sig_no);
#elif

#ifndef WINDOWS
void sigint_catch(int sig_no);
#endif

#endif

#endif
