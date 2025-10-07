#include <stdio.h>
#include "scheduler.h"
#include "queue.h"
#include "utils.h"

void fcfs(Process processes[], int n) {
  Node *head = NULL, *tail = NULL;
  int time = 0, completed = 0;
  int gantt[100], time_line[100];
  int count = 0;
  
  for (int i = 0; i < n; i++) {
      if (processes[i].arrival_time == 0) {
          enqueue(&head, &tail, &processes[i]);
      }
    }
  while (completed < n) {
    if (head) {
      Process *p = dequeue(&head, &tail);

      if (time < p->arrival_time)
        time = p->arrival_time;
      
      gantt[count] = p->pid;
      time_line[count] = time;
      count++;

      time += p->burst_time;
      p->remaining_time = 0;
      p->completed = 1;
      p->turnaround_time = time - p->arrival_time;
      p->waiting_time = p->turnaround_time - p->burst_time;

      completed++;
      for (int i = 0; i < n; i++) {
          if(processes[i].arrival_time <= time &&
            !processes[i].completed &&
            processes[i].remaining_time == processes[i].burst_time) {
            enqueue(&head, &tail, &processes[i]);
          }
      }
    } else {
        time++;
        for (int i = 0; i < n; i++) {
          if(processes[i].arrival_time <= time &&
            !processes[i].completed &&
            processes[i].remaining_time == processes[i].burst_time) {
            enqueue(&head, &tail, &processes[i]);
          }
        }
    }
  }
      
  time_line[count] = time;

  printGantt(gantt, time_line, count);
  printResults(processes, n);
}
