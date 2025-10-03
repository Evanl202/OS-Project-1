#include <stdio.h>
#include "process.h"
#include "scheduler.h"

int readProcesses(Process processes[]);
#define MAX_PROCESSES 100

int main() {
  Process processes[MAX_PROCESSES];
  int n = readProcesses(processes);

  //Menu for selecting which scheduler for processing processes.txt
  int input, quantum;
  printf("CPU Scheduling Sim\n");
  printf("1. First Come First Serve (FCFS)\n");
  printf("2. Round Robin (RR)\n");
  printf("Input scheduling type: \n");
  scanf("%d", %input);

  switch (input) {
    case 1:
      printf("\n First Come First Server (FCFS)\n");
      fcfs(processes, n);
      break
        
    case 2:
      printf("Input quantum time for Round Robin: ");
      scanf("%d", %quantum);
      printf("\n Round Robin (RR)\n");
      roundRobin(process, n, quantum);
      break

    default:
      printf("Invalid input.\n")
  }

  return 0;
}
