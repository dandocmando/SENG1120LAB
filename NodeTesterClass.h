#ifndef test
#define test
#include "account.h"

class Node {


private:
	
	value_type data;


	int data;
	Node* next;
	Node* prev;




public:
	typedef account value_type;
	

	void set_next(Node* n);
	void set_prev(Node* p);
	void set_data(int d);

	Node* get_next() const;
	Node* get_prev() const;
	int get_data() const;


	void Printout(Node* head);





};

#endif