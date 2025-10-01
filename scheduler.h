#ifndef SCHEDULER_H
#define SCHEDULER_H

#define MAX_PROCESSES 100

//Structure of process
typedef struct {
  int pid;
  int arrival_time;
  int burst_time;
  int priority;
  int waiting_time;
  int turnaround_time;
  int completion_time;
} Process;

//Functions
int readProcesses(const char *filename, Process processes[]);
void printGantt(Process processes[], int n);
void printResults(int gantt[], int time_line[], int count[]);

//Algorithms
void RoundRobin(Process processes[], int n, int quantum);
void fcfs(Process processes[], int n);

#endif
