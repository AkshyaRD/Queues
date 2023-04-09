# Performing opeartions on Queue

### About Queues
A Queue is defined as a linear data structure that is open at both ends and the operations are performed in First In First Out (FIFO) order.  
We define a queue to be a list in which all additions to the list are made at one end, and all deletions from the list are made at the other end.   
The element which is first pushed into the order, the operation is first performed on that.  


### About the code  
3 separate functions have been declared to perform the enqueue, dequeue operations and to display the elements of the Queue.
#### Variables Used  
**Global Variables**  
"int queue[10]" array of int type and size=10 to store elements of the queue.  
"int front" to store the position of front end of the queue.
"int rear" to store the position of rear end of the queue.

**Inside the main**  
"int ch" to store the choice of the user
"int data" to input data entered and store it in the stack  

**Inside function void display()** 
"int i" for running iteration on the for loop  

#### Functions  
1. void enqueue(int data)  
To push the data entered into the queue 
If the value of rear=9[SIZE-1], that is, if the Queue is full the program gives a message "Queue Overflow!" 
Otherwise the data is entered into the Queue and rear is incremented by 1.  

2. void pop()  
If the value of front=-1, that is, if the Queue is empty the program gives a message "Queue Underflow!"
Otherwise it removes the element from the Queue and front is incremented.  

3. void display()    
Otherwise displays the elements present in queue from top to bottom  


### OUTPUT SCREENSHOTS

Enqueue operation  
![image](https://user-images.githubusercontent.com/91966613/230759994-8625f003-aa69-4bbf-8f92-72a415fb97be.png)  

Dequeue Operation  
![image](https://user-images.githubusercontent.com/91966613/230760051-d922b939-d856-4c5f-a7ed-473efc6de7de.png)
 


