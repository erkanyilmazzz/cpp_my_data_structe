/*
 * LinkedList.cpp
 *
 *  Created on: Dec 29, 2018
 *      Author: gtucpp
 */

#include "LinkedList.h"

namespace MyCollection {

template<class E,class Container>
LinkedList<E,Container>::LinkedList(){
//it is empty
}

template<class E,class Container>
LinkedList<E,Container>::~LinkedList(){
	_data.clear();
}

template<class E,class Container>
void LinkedList<E,Container>::add(E e){
		_data.insert(_data.begin(),e);
}

template<class E,class Container>
void LinkedList<E,Container>::addAll(Collection<E,Container> &c){

}

template<class E,class Container>
void LinkedList<E,Container>::clear(){
	_data.clear();
}

template<class E,class Container>
bool LinkedList<E,Container>::contains(E e)const{
	bool isHere=false;
		for(auto i:_data){
			if(i==e){
				isHere=true;
			}
		}
	return (isHere);
}

template<class E,class Container>
bool LinkedList<E,Container>::containsAll(Collection<E,Container> &c)const{
	//implementation
	return 0;
}

template<class E,class Container>
bool LinkedList<E,Container>::isEmpty()const{
	if(_data.size()==0)
		return true;
	else
		return false;
}


template<class E,class Container>
void LinkedList<E,Container>::remove(E e){
	auto iter=_data.begin();
	_data.erase(iter);
}

template<class E,class Container>
void LinkedList<E,Container>::removeAll(Collection<E,Container> & c){
	this->clear();
}

template<class E ,class Container>
void LinkedList<E,Container>::reintainAll(Collection<E,Container>& c){
	//implementation
}

template<class E,class Container>
int LinkedList<E,Container>::size()const{
	return _data.size();
}


template<class E,class Container>
E LinkedList<E,Container>::element()const{
	//implemenrt
	for(auto i:_data){
		return i;
	}
}


template<class E ,class Container>
void LinkedList<E,Container>::offer(E e){
	_data.insert(_data.begin(),e);

}


template<class E,class Container>
E LinkedList<E,Container>::poll(){
	auto iter=_data.begin();
	for(auto i:_data){
		auto temp=i;
		_data.erase(iter);
		return temp;
	}
}





} /* namespace MyCollection */
