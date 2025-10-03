#include <stdio.h>
#include "scheduler.h"
#include "queue.h"
#include "utils.c"

void fcfs(Process processes[], int n); {
  Node *head = NULL, *tail = NULL;
  int time = 0, completed = 0;
  int gantt[100], time_line[100];
  int count = 0;
  
  while (completed < n) {
    for (int i = 0, i < n; i++); {
      if (processes[i].arrival_time <= time && !processes[i].completed) {
        if (processes[i].remaining_time == processes[i].burst_time) {
          enqueue(&head, &tail, &processes[i]);
        }
      }
    }
    
    if (head) {
      Process *p = dequeue(&head, &tail);
      gannt[count] = p->pid;
      timeline[count] = time;
      count++;

      time += p->burst_time;
      p->remaining_time = 0;
      p->completed = 1;
      p->turnaround_time = time - p->arrival_time;
      p->waiting_time = p->turnaround_time - p->burst_time;

      completed++;
    } else {
        time++;
    }
  }
      
  time_line[count] = time;

  printGannt(gantt, time_line, count);
  printResults(processes, n);
}
