/*
 * ArrayList.h
 *
 *  Created on: Dec 29, 2018
 *      Author: gtucpp
 */

#ifndef ARRAYLIST_H_
#define ARRAYLIST_H_
#include"List.h"


namespace MyCollection {



template<class E,class Container=vector<E> >
class ArrayList:public List<E,Container> {
public:
	ArrayList();
	virtual ~ArrayList();

	//Iterator sorununu hale çözemedim!!!!!!!!!!!!!!!!!!
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

//////////////////////////////////////////////////////////////////collections functions

private:
	Container _data;

};

} /* namespace MyCollection */
#endif /* ARRAYLIST_H_ */
