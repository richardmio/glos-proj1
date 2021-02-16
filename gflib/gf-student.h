/*
 *  This file is for use by students to define anything they wish.  It is used by both the gf server and client implementations
 */
#ifndef __GF_STUDENT_H__
#define __GF_STUDENT_H__
#include <stdio.h>
#include <sys/signal.h>
#include <string.h>
#include <getopt.h>
#include <unistd.h>
#include <errno.h>
#include <netdb.h>
#include <sys/socket.h>
#include <stdlib.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <sys/stat.h>

char SAMPLE_REQUEST_STR[] = "GETFILE GET /path/to/file.pdf\r\n\r\n";
char SAMPLE_RESPONSE_STR[] = "GETFILE OK 107528\r\n\r\n%PDF-12345";

 #endif // __GF_STUDENT_H__