#ifndef _GET_GIT_VERSION_H_ 
#define _GET_GIT_VERSION_H_ 
// 
#define STRINGIZE2(s) #s 
#define STRINGIZE(s) STRINGIZE2(s) 
// 
#define GIT_VERSION_NUMBER mariamole_0.7-19-g1735
#define GIT_VERSION_STRING STRINGIZE(GIT_VERSION_NUMBER) 
#endif 
