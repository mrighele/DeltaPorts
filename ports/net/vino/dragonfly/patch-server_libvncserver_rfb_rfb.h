--- server/libvncserver/rfb/rfb.h.orig	2011-05-02 16:07:11.000000000 +0000
+++ server/libvncserver/rfb/rfb.h
@@ -45,6 +45,10 @@ extern "C"
 #include <sys/types.h>
 #endif
 
+#ifdef HAVE_SYS_SOCKET_H
+#include <sys/socket.h>
+#endif
+
 #ifndef HAVE_NETINET_IN_H
 #include <netinet/in.h>
 #endif
