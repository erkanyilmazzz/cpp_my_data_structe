/*
 * List.h
 *
 *  Created on: Dec 27, 2018
 *      Author: gtucpp
 */

#ifndef LIST_H_
#define LIST_H_
#include"Collection.h"

namespace MyCollection {

	template<class E,class Container=vector<E> >
	class List:public Collection<E,Container>{

	};

} /* namespace MyCollection */
#endif /* LIST_H_ */
