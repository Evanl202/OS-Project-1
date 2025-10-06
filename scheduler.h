#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "process.h"

//Algorithms
void roundRobin(Process processes[], int n, int quantum);
void fcfs(Process processes[], int n);

#endif
