/*
 * LinkedList.h
 *
 *  Created on: Dec 29, 2018
 *      Author: gtucpp
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include"Queue.h"
#include"List.h"
#include<vector>
using namespace std;


namespace MyCollection {


template<class E,class Container=vector<E> >
class LinkedList:public List<E,Container>,public Queue<E,Container> {
public:
	LinkedList();
	virtual ~LinkedList();
	void add(E e);
	void addAll(Collection<E,Container> &c);
	void clear();
	bool contains(E e)const;
	bool containsAll(Collection<E,Container> &c)const;
	bool isEmpty()const;
	void remove(E e);
	void removeAll(Collection<E,Container> &c);
	void reintainAll(Collection<E,Container> &c);
	int size()const;

//	void add(E e);//Inserts the specified element into this queue
	E element()const;//Retrieves, but does not remove, the head of this queue.
	void offer(E e);//Inserts the specified element into this queue
	E poll();//Retrieves and removes the head of this queue, or throws if this queue is empty.

private:
	Container _data;

};

} /* namespace MyCollection */
#endif /* LINKEDLIST_H_ */
