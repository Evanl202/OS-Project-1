#ifndef SCHEDULER_H
#define SCHEDULER_H

typedef struct Node {
  Process *process;
  struct Node *next;
} Node;

//Queue functions
void enqueue(Node **head, Node **tail, Node *Process);
Process* dequeue(Node **head, Node **tail);

//Functions
int readProcesses(const char *filename, Process processes[]);
void printGantt(Process processes[], int n);
void printResults(int gantt[], int time_line[], int count[]);

//Algorithms
void RoundRobin(Process processes[], int n, int quantum);
void fcfs(Process processes[], int n);

#endif
