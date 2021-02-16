
#include "gfclient-student.h"

struct gfcrequest_t {
    char* server;
    char* path;
    unsigned short port;
    void (*headerfunc)(void *header_buffer, size_t header_buffer_length, void *handlerarg);
    void *headerarg;
    void (*writefunc)(void *data_buffer, size_t data_buffer_length, void *handlerarg);
    void *writearg;
 };
 
 response responseObj;
// optional function for cleaup processing.
void gfc_cleanup(gfcrequest_t **gfr){

}

gfcrequest_t *gfc_create(){
    // dummy for now - need to fill this part in
    gfcrequest_t gt;
    return (gfcrequest_t *) &gt;

}

size_t gfc_get_bytesreceived(gfcrequest_t **gfr){
    // call gfc_callServer() to get the data from server and return the value inside of response struct
    return response.bytesRecieved;
}

size_t gfc_get_filelen(gfcrequest_t **gfr){
    // call gfc_callServer() to get the data from server and return the value inside of response struct
    return response.fileLen;
}

gfstatus_t gfc_get_status(gfcrequest_t **gfr){
    // call gfc_callServer() to get the data from server and return the value inside of response struct
    return response.gfStatus;
}

void gfc_global_init(){
}

void gfc_global_cleanup(){
}

int gfc_perform(gfcrequest_t **gfr){
    // currently not implemented.  You fill this part in.
    // call gfc_callServer() to perform() and return 0 or -1 according to the process
    return -1;
}

//from renchang, private method apply your socket code here to take to the server and get the response back. 
response gfc_callServer(gfcrequest_t **gfr) {
    //use the buffer the get the data from server
    //the data format should be GETFILE OK 107528\r\n\r\n%PDF-12345 
    //Note: check the status code first, only there is a file when status is Ok
    // use the size to determine the end of data in buffer

    // there should be parse process as well, using the string to compose response struct and return it.
}

void gfc_set_headerarg(gfcrequest_t **gfr, void *headerarg){
    *gfr->headerarg = headerarg;
}

void gfc_set_headerfunc(gfcrequest_t **gfr, void (*headerfunc)(void*, size_t, void *)){
    *gfr->headerfunc = headerfunc;
}

void gfc_set_path(gfcrequest_t **gfr, const char* path){
    *gfr->path = path;
}

void gfc_set_port(gfcrequest_t **gfr, unsigned short port){
    *gfr->port = port;
}

void gfc_set_server(gfcrequest_t **gfr, const char* server){
   *gfr->server = server;
}

void gfc_set_writearg(gfcrequest_t **gfr, void *writearg){
    *gfr->writearg = writearg;
}

void gfc_set_writefunc(gfcrequest_t **gfr, void (*writefunc)(void*, size_t, void *)){
    *gfr->writefunc = writefunc;
}

const char* gfc_strstatus(gfstatus_t status){
    const char *strstatus = NULL;

    switch (status)
    {
        default: {
            strstatus = "UNKNOWN";
        }
        break;

        case GF_INVALID: {
            strstatus = "INVALID";
        }
        break;

        case GF_FILE_NOT_FOUND: {
            strstatus = "FILE_NOT_FOUND";
        }
        break;

        case GF_ERROR: {
            strstatus = "ERROR";
        }
        break;

        case GF_OK: {
            strstatus = "OK";
        }
        break;
        
    }

    return strstatus;
}

