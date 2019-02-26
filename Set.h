/*
 * Set.h
 *
 *  Created on: Dec 27, 2018
 *      Author: gtucpp
 */

#ifndef SET_H_
#define SET_H_
#include"Collection.h"

namespace MyCollection {

	template<class E,class Container=vector<E> >
	class Set :public Collection<E,Container>{
	public:
		Set(){

		}
		virtual ~Set(){

		}


	private:
	};


} /* namespace MyCollection */
#endif /* SET_H_ */
