#include <stdio.h>
#include "scheduler.h"
#include "queue.h"
#include "utils.c"

void roundRobin(Process porcesses[], int n, int quantum) {
  Node *head = NULL, *tail = NULL;
  int time = 0, completed = 0;
  int gantt
