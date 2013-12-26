# makefile
# Created by IBM WorkFrame/2 MakeMake at 5:50:09 on 11 Jan 2005
#
# The actions included in this make file are:
#  Compile::C++ Compiler
#  Link::Linker

.SUFFIXES:

.SUFFIXES: \
    .c .cpp .obj 

.cpp.obj:
    @echo " Compile::C++ Compiler "
    icc.exe /Tl- /Iinclude /Ss /Q /O /Gm /G5 /C %s

{G:\Ctorrent}.cpp.obj:
    @echo " Compile::C++ Compiler "
    icc.exe /Tl- /Iinclude /Ss /Q /O /Gm /G5 /C %s

.c.obj:
    @echo " Compile::C++ Compiler "
    icc.exe /Tl- /Iinclude /Ss /Q /O /Gm /G5 /C %s

{G:\Ctorrent}.c.obj:
    @echo " Compile::C++ Compiler "
    icc.exe /Tl- /Iinclude /Ss /Q /O /Gm /G5 /C %s

all: \
    .\target.exe

.\target.exe: \
    .\snprintf.obj \
    .\tracker.obj \
    .\bencode.obj \
    .\bitfield.obj \
    .\btconfig.obj \
    .\btcontent.obj \
    .\btfiles.obj \
    .\btrequest.obj \
    .\btstream.obj \
    .\bufio.obj \
    .\connect_nonb.obj \
    .\ctorrent.obj \
    .\downloader.obj \
    .\getopt.obj \
    .\httpencode.obj \
    .\iplist.obj \
    .\OS2_VACdirent.obj \
    .\peer.obj \
    .\peerlist.obj \
    .\rate.obj \
    .\sigint.obj \
    {$(LIB)}tcpip32.lib
    @echo " Link::Linker "
    icc.exe @<<
     /B" /exepack:2 /packd /optfunc"
     /Fetarget.exe 
     tcpip32.lib 
     .\snprintf.obj
     .\tracker.obj
     .\bencode.obj
     .\bitfield.obj
     .\btconfig.obj
     .\btcontent.obj
     .\btfiles.obj
     .\btrequest.obj
     .\btstream.obj
     .\bufio.obj
     .\connect_nonb.obj
     .\ctorrent.obj
     .\downloader.obj
     .\getopt.obj
     .\httpencode.obj
     .\iplist.obj
     .\OS2_VACdirent.obj
     .\peer.obj
     .\peerlist.obj
     .\rate.obj
     .\sigint.obj
<<

.\snprintf.obj: \
    G:\Ctorrent\snprintf.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}config.h

.\sigint.obj: \
    G:\Ctorrent\sigint.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}peerlist.h \
    {G:\Ctorrent;include;$(INCLUDE);}btcontent.h \
    {G:\Ctorrent;include;$(INCLUDE);}btconfig.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}./bufio.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}./peer.h \
    {G:\Ctorrent;include;$(INCLUDE);}./rate.h \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}btrequest.h \
    {G:\Ctorrent;include;$(INCLUDE);}btstream.h \
    {G:\Ctorrent;include;$(INCLUDE);}Winsock2.h \
    {G:\Ctorrent;include;$(INCLUDE);}unistd.h \
    {G:\Ctorrent;include;$(INCLUDE);}sigint.h

.\rate.obj: \
    G:\Ctorrent\rate.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}./rate.h

.\peerlist.obj: \
    G:\Ctorrent\peerlist.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}tracker.h \
    {G:\Ctorrent;include;$(INCLUDE);}peerlist.h \
    {G:\Ctorrent;include;$(INCLUDE);}setnonblock.h \
    {G:\Ctorrent;include;$(INCLUDE);}connect_nonb.h \
    {G:\Ctorrent;include;$(INCLUDE);}btcontent.h \
    {G:\Ctorrent;include;$(INCLUDE);}iplist.h \
    {G:\Ctorrent;include;$(INCLUDE);}btconfig.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}./bufio.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}./peer.h \
    {G:\Ctorrent;include;$(INCLUDE);}./rate.h \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}btrequest.h \
    {G:\Ctorrent;include;$(INCLUDE);}btstream.h \
    {G:\Ctorrent;include;$(INCLUDE);}Winsock2.h \
    {G:\Ctorrent;include;$(INCLUDE);}unistd.h \
    {G:\Ctorrent;include;$(INCLUDE);}msgencode.h

.\peer.obj: \
    G:\Ctorrent\peer.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}peerlist.h \
    {G:\Ctorrent;include;$(INCLUDE);}btcontent.h \
    {G:\Ctorrent;include;$(INCLUDE);}btconfig.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}./bufio.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}./peer.h \
    {G:\Ctorrent;include;$(INCLUDE);}./rate.h \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}btrequest.h \
    {G:\Ctorrent;include;$(INCLUDE);}btstream.h \
    {G:\Ctorrent;include;$(INCLUDE);}Winsock2.h \
    {G:\Ctorrent;include;$(INCLUDE);}unistd.h \
    {G:\Ctorrent;include;$(INCLUDE);}msgencode.h

.\OS2_VACdirent.obj: \
    G:\Ctorrent\OS2_VACdirent.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}OS2_VACdirent.h \
    {G:\Ctorrent;include;$(INCLUDE);}os2_ErrCodes.h

.\iplist.obj: \
    G:\Ctorrent\iplist.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}iplist.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h

.\httpencode.obj: \
    G:\Ctorrent\httpencode.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}httpencode.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h

.\getopt.obj: \
    G:\Ctorrent\getopt.c \
    {G:\Ctorrent;include;$(INCLUDE);}getopt.h

.\downloader.obj: \
    G:\Ctorrent\downloader.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}tracker.h \
    {G:\Ctorrent;include;$(INCLUDE);}peerlist.h \
    {G:\Ctorrent;include;$(INCLUDE);}btcontent.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}./bufio.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}./peer.h \
    {G:\Ctorrent;include;$(INCLUDE);}./rate.h \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}btrequest.h \
    {G:\Ctorrent;include;$(INCLUDE);}btstream.h \
    {G:\Ctorrent;include;$(INCLUDE);}Winsock2.h \
    {G:\Ctorrent;include;$(INCLUDE);}unistd.h

.\ctorrent.obj: \
    G:\Ctorrent\ctorrent.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}tracker.h \
    {G:\Ctorrent;include;$(INCLUDE);}peerlist.h \
    {G:\Ctorrent;include;$(INCLUDE);}btcontent.h \
    {G:\Ctorrent;include;$(INCLUDE);}btconfig.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}./bufio.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}./peer.h \
    {G:\Ctorrent;include;$(INCLUDE);}./rate.h \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}btrequest.h \
    {G:\Ctorrent;include;$(INCLUDE);}btstream.h \
    {G:\Ctorrent;include;$(INCLUDE);}Winsock2.h \
    {G:\Ctorrent;include;$(INCLUDE);}unistd.h \
    {G:\Ctorrent;include;$(INCLUDE);}getopt.h \
    {G:\Ctorrent;include;$(INCLUDE);}downloader.h \
    {G:\Ctorrent;include;$(INCLUDE);}sigint.h

.\connect_nonb.obj: \
    G:\Ctorrent\connect_nonb.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}connect_nonb.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h

.\bufio.obj: \
    G:\Ctorrent\bufio.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}btcontent.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}./bufio.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}btrequest.h

.\btstream.obj: \
    G:\Ctorrent\btstream.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}btconfig.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}./bufio.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}btstream.h \
    {G:\Ctorrent;include;$(INCLUDE);}Winsock2.h \
    {G:\Ctorrent;include;$(INCLUDE);}unistd.h \
    {G:\Ctorrent;include;$(INCLUDE);}msgencode.h

.\btrequest.obj: \
    G:\Ctorrent\btrequest.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}btcontent.h \
    {G:\Ctorrent;include;$(INCLUDE);}btconfig.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}btrequest.h

.\btfiles.obj: \
    G:\Ctorrent\btfiles.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}snprintf.h \
    {G:\Ctorrent;include;$(INCLUDE);}bencode.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}OS2_VACdirent.h

.\btcontent.obj: \
    G:\Ctorrent\btcontent.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}httpencode.h \
    {G:\Ctorrent;include;$(INCLUDE);}bencode.h \
    {G:\Ctorrent;include;$(INCLUDE);}btcontent.h \
    {G:\Ctorrent;include;$(INCLUDE);}btconfig.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}./bufio.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}./peer.h \
    {G:\Ctorrent;include;$(INCLUDE);}./rate.h \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}btrequest.h \
    {G:\Ctorrent;include;$(INCLUDE);}btstream.h \
    {G:\Ctorrent;include;$(INCLUDE);}Winsock2.h \
    {G:\Ctorrent;include;$(INCLUDE);}unistd.h

.\btconfig.obj: \
    G:\Ctorrent\btconfig.cpp

.\bitfield.obj: \
    G:\Ctorrent\bitfield.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h

.\bencode.obj: \
    G:\Ctorrent\bencode.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}snprintf.h \
    {G:\Ctorrent;include;$(INCLUDE);}bencode.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h

.\tracker.obj: \
    G:\Ctorrent\tracker.cpp \
    {G:\Ctorrent;include;$(INCLUDE);}tracker.h \
    {G:\Ctorrent;include;$(INCLUDE);}snprintf.h \
    {G:\Ctorrent;include;$(INCLUDE);}peerlist.h \
    {G:\Ctorrent;include;$(INCLUDE);}httpencode.h \
    {G:\Ctorrent;include;$(INCLUDE);}bencode.h \
    {G:\Ctorrent;include;$(INCLUDE);}setnonblock.h \
    {G:\Ctorrent;include;$(INCLUDE);}connect_nonb.h \
    {G:\Ctorrent;include;$(INCLUDE);}btcontent.h \
    {G:\Ctorrent;include;$(INCLUDE);}iplist.h \
    {G:\Ctorrent;include;$(INCLUDE);}btconfig.h \
    {G:\Ctorrent;include;$(INCLUDE);}./def.h \
    {G:\Ctorrent;include;$(INCLUDE);}./bufio.h \
    {G:\Ctorrent;include;$(INCLUDE);}config.h \
    {G:\Ctorrent;include;$(INCLUDE);}./peer.h \
    {G:\Ctorrent;include;$(INCLUDE);}./rate.h \
    {G:\Ctorrent;include;$(INCLUDE);}bitfield.h \
    {G:\Ctorrent;include;$(INCLUDE);}btfiles.h \
    {G:\Ctorrent;include;$(INCLUDE);}btrequest.h \
    {G:\Ctorrent;include;$(INCLUDE);}btstream.h \
    {G:\Ctorrent;include;$(INCLUDE);}Winsock2.h \
    {G:\Ctorrent;include;$(INCLUDE);}unistd.h
