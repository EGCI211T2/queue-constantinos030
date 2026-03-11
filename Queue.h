
#ifndef queue_h
#define queue_h
#include "Node.h"
class Queue {
	NodePtr headPtr,tailPtr;
	int size;
public:
    void enqueue(int);
    int dequeue();
    Queue(int size_in = 0, NodePtr head = NULL, NodePtr tail = NULL);
    ~Queue();
};


void Queue::enqueue(int x){
  NodePtr new_node= new NODE(x);
if(new_node){ 
    if (headPtr==NULL){headPtr=new_node; tailPtr=new_node; size++;}
    else{ 
        tailPtr->set_next(new_node);
        tailPtr = new_node;
        size++;
    }
    /* Add head and tail for me please */
/*1. connect & Change tail
  2. (may be) change head  when the queue is empty
  3. increase size */
	
 }
}

int Queue::dequeue(){
  if(size>0 && headPtr!=NULL){
    
    int return_val = headPtr->get_value();
    NodePtr new_head = headPtr->get_next();
    
    NodePtr old_head = headPtr;
    headPtr = new_head;
    
    delete old_head; size--;
    return return_val;
  }
  cout<<"Empty Queue\n";
  return -1;
}


Queue::Queue(int size_in, NodePtr head, NodePtr tail){
    size = size_in;
    headPtr = head;
    tailPtr = tail;
}
Queue::~Queue(){
    while(headPtr!=NULL)
    {
        this->dequeue();
    } 
}


#endif
