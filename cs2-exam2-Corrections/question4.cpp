/*
QUESTION: What line of code makes the character pointer studentPointer point to the character variable 
userStudent?

char userStudent = 'S';
char *studentPointer;

INCORRECT ANSWER: *studentPointer = &userStudent;

CORRECT ANSWER: studentPointer = &userStudent;

EXPLANATION:

  using *studentPointer = &userStudent; actually dereferences the pointer and thats not what we want
  using *studentPointer = userStudent; also doesnt work as it stores S into the pointer but the pointer has no valid address yet
  using studentPointer = &userStudent; this makes the pointer point to the memory address of userStudent, that way when you dereference *studentPointer then we get the char we want which is 'S'
*/