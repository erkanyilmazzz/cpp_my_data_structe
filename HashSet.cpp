/*
 * HashSet.cpp
 *
 *  Created on: Dec 27, 2018
 *      Author: gtucpp
 */

#include "HashSet.h"
#include<typeinfo>

namespace MyCollection {

	template<class E,class Container>
	HashSet<E,Container>::HashSet(){

	}

	template<class E,class Container>
	HashSet<E,Container>::~HashSet(){
		_data.clear();
	}

	template<class E,class Container>
	void HashSet<E,Container>::add(E e){
	bool isHere=false;
		for(auto i:_data){
			if(i==e){
				isHere=true;
			}
		}
		if(isHere==false){
			_data.insert(_data.begin(),e);
		}


	}

	template<class E,class Container>
	void HashSet<E,Container>::addAll(Collection<E,Container> &c){

	}

	template<class E,class Container>
	void HashSet<E,Container>::clear(){
		_data.clear();
	}

	template<class E,class Container>
	bool HashSet<E,Container>::contains(E e)const{
		bool isHere=false;
			for(auto i:_data){
				if(i==e){
					isHere=true;
				}
			}
		return (isHere);
	}

	template<class E,class Container>
	bool HashSet<E,Container>::containsAll(Collection<E,Container> &c)const{
		//implementation
		return 0;
	}

	template<class E,class Container>
	bool HashSet<E,Container>::isEmpty()const{
		if(_data.size()==0)
			return true;
		else
			return false;
	}


	template<class E,class Container>
	void HashSet<E,Container>::remove(E e){
		//silmek
	}

	template<class E,class Container>
	void HashSet<E,Container>::removeAll(Collection<E,Container> & c){
		this->clear();
	}

	template<class E ,class Container>
	void HashSet<E,Container>::reintainAll(Collection<E,Container>& c){
		//implementation
	}

	template<class E,class Container>
	int HashSet<E,Container>::size()const{
		return _data.size();
	}


} /* namespace MyCollection */
