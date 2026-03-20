#ifndef data_h
#define data_h


#include <stdio.h>
#include <string.h>

#define NAME_LENGTH 50
#define NUM_MODULES 3

/**
 * @brief Structure to represent a student
 */
typedef struct {
    char name[NAME_LENGTH];  // Student's name
    int id;                  // Student's ID number
    float marks[NUM_MODULES]; // Marks for three modules
} Student;


#endif