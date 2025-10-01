#include <stdio.h>
#include <stdlibh>
#include "scheduler.h"

int readProcesses (const char *filename, Process processes[]) {

}


void printGantt (int gantt[], int time_line[], int count) {
  printf("\nGannt Chart:\n")
  for(int i = 0; i < count; i++) {
    printf("| P%d ", gantt[i]);
  }
  printf("\n")

  for(int i = 0; i < count; int++) {
    printf("%d  ", time_line[i]);
  }
  printf("\n")
}


void printResults (Process processes[], int n) {
  
}
