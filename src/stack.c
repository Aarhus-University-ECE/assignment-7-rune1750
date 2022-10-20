#include "stack.h"

void initialize(stack *s)
{
  // Yeah of the stack points to NULL, as there is no data in the stack yet
  s->head = NULL;
}

void push(int x, stack *s)
{
  // creating element named "card" by the struct of node.
  // Card's data becomes x
  // Card's next becomes index of the previous element, head.
  // Head becomes index of new element.
  node *card = (node *)malloc(sizeof(node));
  card->data = x;
  card->next = s->head;
  s->head = card;
}

int pop(stack *s)
{
  // a place-holder for the data from the top of the stack is created.
  // if the stack is empty, the function stops.
  // the place-holder is assigned the value of the data top of the stack
  // the top of the stack is assigned the value of its own next, which is index of the previous card-element.
  // finally
  if (s->head == NULL)
  {
    printf(" the stack is empty!!");
    return -1;
  } 
  int top_data = s->head->data;
  s->head = s->head->next;
  return top_data;
}

bool empty(stack *s)
{
  // if s.head is NULL, it means no elements "card" have been made in the push function.
  if (s->head == NULL)
  {
    printf("\n the stack is empty!\n");
    return true;
  }
  else
  {
    printf("\n the stack is not empty!\n");
    return false;
  }
}

bool full(stack *s)
{
  // The advantage of a linked-list stack, is that there is no pre-determined limit to how large the stack is.
  // Therefore it is not relevant to create a function to check if the stack is full.
  // If the stack was an array "stack[100]", it would be relevant to have a counter in the push/pop functions.
  // If this counter exceeded the array size (in this case 100), then the stack would be full.

  // TLDR; This function is the "trick" - The size limit of a linked-list stack, is the amount of allocated memory in the PC.
  return false;
}
