/*
 * Queue.h
 *
 *  Created on: Dec 27, 2018
 *      Author: gtucpp
 */

#ifndef QUEUE_H_
#define QUEUE_H_
#include"Collection.h"

namespace MyCollection {

	template<class E,class Container=vector<E> >
	class Queue:public Collection<E,Container>{
	public:
		Queue(){

		}
		virtual ~Queue(){

		}

		virtual void add(E e)=0;//Inserts the specified element into this queue
		virtual E element()const=0;//Retrieves, but does not remove, the head of this queue.
		virtual void offer(E e)=0;//Inserts the specified element into this queue
		virtual E poll()=0;//Retrieves and removes the head of this queue, or throws if this queue is empty.
	private:

	};


} /* namespace MyCollection */
#endif /* QUEUE_H_ */
