#include <stdio.h>
#include <stdlibh>
#include "scheduler.h"

//function to read the data from the processes file
int readProcesses (const char *filename, Process processes[]) {
  FILE *file = fopen(filename, "r");

  int n = 0;
  char line[100];
  fgets(line, sizeof(line), file);

  while f(fscanf(file,
}


void printGantt (int gantt[], int time_line[], int count) {
  printf("\nGannt Chart:\n") //loops through pid and prints 
  for(int i = 0; i < count; i++) {
    printf("| P%d ", gantt[i]);
  }
  printf("\n")

  for(int i = 0; i < count; int++) { //loops through pid completion time and prints
    printf("%d  ", time_line[i]);
  }
  printf("\n")
}


void printResults (Process processes[], int n) {
  
}
