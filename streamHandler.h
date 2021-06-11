#ifndef __STREAMHANDLER_H__
#define __STREAMHANDLER_H__

#include "student.h"
#include "btree.h"
#include <string.h>

#define BTREEFILENAME "btree.dat"
#define DATAFILENAME "data.dat"


void readString(char *string, char separator);

studentRegister *searchStudentInDataFile(long RRN);
studentRegister *readStudentFromUser();

void insertStudentInDataFile(studentRegister *student);
void updateStudent(studentRegister *student, long RRN);
void insertNodeInBTreeFile(bTreePage *bPage, FILE *bFile, long RRN);

long getRecordsInDataFile();
bTreePage *getPageFromBTreeFile(long RRN);


#endif