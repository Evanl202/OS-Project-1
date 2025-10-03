#include <stdio.h>
#include <stdlib.h>
#include "process.h"

#define MAX_PROCESS 100
//function to read the data from the processes file
int readProcesses (Process processes[]) {
  FILE *file = fopen("processes.txt, "r");

  int n = 0;

  while f(fscanf(file, "%d %d %d", 
      &processes[n].pid, 
      &processes[n].arrival_time, 
      &processes[n].burst_time) == 3) { 
    &processes[n].waiting_time = 0;
    &processes[n].turnaround_time = 0;
    &processes[n].completed = 0;
    &processes[n].remaining_time = process[n].burst_time;
    n++;
  }
  fclose(file);
  return n;
}

void printGantt (int gantt[], int time_line[], int count) {
  printf("\nGantt Chart:\n") //loops through pid and prints 
  for(int i = 0; i < count; i++) {
    printf("| P%d ", gantt[i]);
  }
  printf("|\n")

  for(int i = 0; i < count; int++) { //loops through pid completion time and prints
    printf("%d  ", time_line[i]);
  }
  printf("\n")
}

//prints result 
void printResults (Process processes[], int n) {
  double total_wt = 0, total_tat = 0;
  printf("\n PID\tAT\tBT\tWT\tTAT\n");
  for (int i = 0; i < n; i++) {
    printf("%d\t%d\t%d\t%d\t%d\n",
        processes[i].pid,
        processes[i].arrival_time,
        processes[i].burst_time,
        processes[i].waiting_time,
        processes[i].turnaround_time,
      total_wt += process[i].waiting_time;
      total_tat += process[i].turnaround_time;
  }
  printf("\nAverage waiting time = %.2f\n", total_wt / n);
  printf("Average turnaround time = %.2f\n", total_tat / n);
}
