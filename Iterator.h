/*
 * Iterator.h
 *
 *  Created on: Dec 28, 2018
 *      Author: gtucpp
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_
#include<vector>
using namespace std;

namespace MyCollection {


template<class E,class Container=vector<E> >
class Iterator :public iterator<E,Container>{
public:
	Iterator(){

	}
	bool hasNext()const;
	E &next()const;
	void remove();

private:

};

//////////////////////////////////////////////////////
template<class E,class Container>
bool Iterator<E,Container>::hasNext()const{
return 0;
}


} /* namespace MyCollection */
#endif /* ITERATOR_H_ */
