//Guy Goudeau
//gg1126
//Oct 5, 2015
 
class Node //initalize class Node
{
public: // public information
	int data; //initialize int variable called data
	Node* next; //Node pointer of next to point to next nodes
	Node(int); //prototype for nodes
private: //private information
};

class Stack //initialize class Stack
{
public: //public information
	Node *top; //Node specific top pointer
	void peek(Stack); //function prototype for peek
	void push(Node &); //function prototype for push
	void pop(Stack); //function prototype for pop
	void empty(Stack); //function prototype for empty
	void size(Stack); //function prototype for size
private: //private information
};

