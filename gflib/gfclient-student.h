/*
 *  This file is for use by students to define anything they wish.  It is used by the gf client implementation
 */
 #ifndef __GF_CLIENT_STUDENT_H__
 #define __GF_CLIENT_STUDENT_H__
 
 #include "gfclient.h"
 #include "gf-student.h"

 struct response {
     gfstatus_t gfStatus;
     size_t fileLen;
     size_t bytesRecieved;
 }

// the personal method to wrap call to server socket code
 response gfc_callServer(gfcrequest_t **gfr);
 
 #endif // __GF_CLIENT_STUDENT_H__