/*
 * HashSet.h
 *
 *  Created on: Dec 27, 2018
 *      Author: gtucpp
 */

#ifndef HASHSET_H_
#define HASHSET_H_
#include"Collection.h"
#include"Set.h"


namespace MyCollection {

	template<class E,class Container=vector<E> >
	class HashSet:public Set<E,Container>{
	public:
		 HashSet();
		virtual ~HashSet();

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





#endif /* HASHSET_H_ */
