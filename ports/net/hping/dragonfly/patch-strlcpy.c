--- strlcpy.c.orig	2003-07-28 09:00:55 UTC
+++ strlcpy.c
@@ -42,7 +42,7 @@
 
 /* This function comes from BSD */
 #if !defined(__FreeBSD__) && !defined(__OpenBSD__) && !defined(__NetBSD__) && \
-    !defined(__bsdi__) && !defined(__APPLE__)
+    !defined(__bsdi__) && !defined(__APPLE__) && !defined(__DragonFly__)
 #include <sys/types.h>
 #include <string.h>
 
