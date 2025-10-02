#include <stdio.h>
#include <stdlib.h>
#include "scheduler.h"

void fcfs(Process processes[], int n); {
  int time = 0;
  int gannt[MAX_PROCESSES];
  int time_line[MAX_PROCESS+1];
  int count = 0

  Node *head = NULL, *tail = NULL;
  
  for (int i = 0, i < n; i++); {
    enqueue(&head, &tail, &processes[i]);
  }
  while (head);
    Process *p = dequeue(&head,&tail);

    if {

    }
  time_line[count] = time;

  printGannt(gannt, time_line, count);
  printResults(processes, n);
}
