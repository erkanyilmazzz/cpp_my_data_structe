/*
 * ArrayList.cpp
 *
 *  Created on: Dec 29, 2018
 *      Author: gtucpp
 */

#include "ArrayList.h"

namespace MyCollection {




template<class E,class Container>
ArrayList<E,Container>::ArrayList() {
	// TODO Auto-generated constructor stub

}


template<class E,class Container>
ArrayList<E,Container>::~ArrayList(){
	_data.clear();
}

template<class E,class Container>
void ArrayList<E,Container>::add(E e){
	_data.insert(_data.begin(),e);

}

template<class E,class Container>
void ArrayList<E,Container>::addAll(Collection<E,Container> &c){

}

template<class E,class Container>
void ArrayList<E,Container>::clear(){
	_data.clear();
}

template<class E,class Container>
bool ArrayList<E,Container>::contains(E e)const{
	bool isHere=false;
		for(auto i:_data){
			if(i==e){
				isHere=true;
			}
		}
	return (isHere);
}

template<class E,class Container>
bool ArrayList<E,Container>::containsAll(Collection<E,Container> &c)const{
	//implementation
	return 0;
}

template<class E,class Container>
bool ArrayList<E,Container>::isEmpty()const{
	if(_data.size()==0)
		return true;
	else
		return false;
}


template<class E,class Container>
void ArrayList<E,Container>::remove(E e){
	//silmek
}

template<class E,class Container>
void ArrayList<E,Container>::removeAll(Collection<E,Container> & c){
	this->clear();
}

template<class E ,class Container>
void ArrayList<E,Container>::reintainAll(Collection<E,Container>& c){
	//implementation
}

template<class E,class Container>
int ArrayList<E,Container>::size()const{
	return _data.size();
}
































} /* namespace MyCollection */
