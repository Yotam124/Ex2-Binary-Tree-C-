/*
 * Tree.hpp
 *
 *  Created on: 13 Mar 2019
 *      Author: yotam dafna, tomer hazan, matti stern
 */
#include <iostream>

struct node {
	int value;
	node* right;
	node* left;
	node* parent;
};

class Tree {
	public:
		Tree();
		int Size = 0;
		node *Root;

		Tree& insert(int i);
		Tree& remove(int i);
		int size();
		bool contains(int i);
		int root();
		int parent(int i);
		int left(int i);
		int right(int i);
		void print();
};




