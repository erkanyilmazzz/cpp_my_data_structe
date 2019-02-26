/*
 * Collection.h
 *
 *  Created on: Dec 26, 2018
 *      Author: gtucpp
 */

#ifndef COLLECTION_H_
#define COLLECTION_H_
#include<iostream>
#include<vector>
#include"Iterator.h"

namespace MyCollection {
using namespace std;

	template<class E,class Container=vector<E> >
	class Collection{
	public:
		virtual ~Collection(){

		}

		Collection(){

		}

		Iterator<E,Container> iterator(){
			Iterator<E,Container> a;
			return a;
		}
		virtual void add(E e)=0;
		virtual void addAll(Collection &c)=0;
		virtual void clear()=0;
		virtual bool contains(E e)const=0;
		virtual bool containsAll(Collection &c)const=0;
		virtual bool isEmpty()const=0;
		virtual void remove(E e)=0;
		virtual void removeAll(Collection &c)=0;
		virtual void reintainAll(Collection &c)=0;
		virtual int size()const=0;
//Container _getData();
	private:

	};



} /* namespace MyCollection */
#endif /* COLLECTION_H_ */
