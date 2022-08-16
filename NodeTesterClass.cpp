#include <iostream>
#include <cstdlib>
#include "NodeTesterClass.h"
#include "account.h"

using namespace std;

void Node::set_next(Node* n){next = n;}
void Node::set_prev(Node* p){prev = p;}
void Node::set_data(int d){data =d;}

Node* Node::get_next() const{return next;}
Node* Node::get_prev() const{return prev;}
int Node::get_data() const{return data;}


void Node::Printout(Node* head){
	Node* temp = head;

	while(temp != NULL){
		std::cout << temp->get_data() << " ";
		temp = temp->get_next();


	}
	std::cout << std::endl;
}

int main(int argc, char** argv){

	Node* head;
	Node* tail;
	Node* n;

	account* acc = new account("james",100.0);

	n = new Node;
	n->set_data(1);
	n->set_prev(NULL);
	head = n;
	tail = n;

	n = new Node;
	n->set_data(2);
	n->set_prev(tail);
	tail->set_next(n);
	tail = n;

	n = new Node;
	n->set_data(3);
	n->set_prev(tail);
	tail->set_next(n);
	tail = n;

	n = new Node;
	n->set_data(4);
	n->set_prev(tail);
	tail->set_next(n);
	tail = n;
	tail->set_next(NULL);

	n->Printout(head);


	

	return 0;


}


