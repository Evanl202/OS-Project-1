#include <stdio.h>
#include <stdlibh>
#include "scheduler.h"

int readProcesses (const char *filename, Process processes[]) {

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
