/**
 * @file version.h
 *
 * @date 22.12.2015
 * @author Andre
 * @description
 */
#ifndef VERSION_H_
#define VERSION_H_

#define MAJOR_VERSION   0
#define MINOR_VERSION   1

//#define REVISION        0

#define STRINGIZE_NX(A) #A
#define STRINGIZE(A) STRINGIZE_NX(A)

#ifndef REVISION
  #define VERSION_STRING  STRINGIZE(MAJOR_VERSION) "." STRINGIZE(MINOR_VERSION)
#else
  #define VERSION_STRING  STRINGIZE(MAJOR_VERSION) "." STRINGIZE(MINOR_VERSION) "-" STRINGIZE(REVISION)
#endif


#endif /* VERSION_H_ */
