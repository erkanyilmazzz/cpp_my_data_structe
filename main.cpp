//============================================================================
// Name        : CollectionDrive.cpp
// Author      : erkan
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include"Collection.h"
#include"HashSet.h"
#include"HashSet.cpp"
#include"ArrayList.h"
#include"ArrayList.cpp"
#include"LinkedList.h"
#include"LinkedList.cpp"


#include<set>
#include<list>

using namespace std;
using namespace MyCollection;

int main() {
	
	HashSet<int ,set<int> > a;
	HashSet<int ,vector<int> > b;
	HashSet<int ,list<int> > c;
/*
	a.add(1);
	a.add(2);
	a.add(2);
	a.add(4);
	a.add(9);
	a.add(10);
	cout<<a.contains(1)<<endl;
	cout<<a.contains(0)<<endl;
	cout<<a.contains(3)<<endl;
	cout<<a.contains(2)<<endl;
	cout<<a.contains(4)<<endl;

	cout<<a.isEmpty()<<endl;
	cout<<"size::"<<a.size()<<endl;
cout<<"-----------------------"<<endl;
	a.clear();
	cout<<a.isEmpty()<<endl;
	cout<<a.contains(1)<<endl;
	cout<<a.contains(0)<<endl;
	cout<<a.contains(3)<<endl;
	cout<<a.contains(2)<<endl;
	cout<<"size::"<<a.size()<<endl;
*/
	ArrayList<int ,set<int> > d;
	ArrayList<int ,vector<int> > e;
	ArrayList<int ,list<int> > f;
/*
	d.add(1);
	d.add(2);
	d.add(3);
	d.add(4);
	d.add(10);
	d.add(12);

	cout<<d.contains(1)<<endl;
	cout<<d.contains(0)<<endl;
	cout<<d.contains(3)<<endl;
	cout<<d.contains(2)<<endl;
	cout<<d.contains(4)<<endl;
	cout<<"size::"<<d.size()<<endl;
	d.clear();
	cout<<d.contains(1)<<endl;
	cout<<d.contains(0)<<endl;
	cout<<d.contains(3)<<endl;
	cout<<d.contains(2)<<endl;
	cout<<d.contains(4)<<endl;
	cout<<"size::"<<d.size()<<endl;
*/

	LinkedList<int ,set<int> > g;
	LinkedList<int ,vector<int> > h;
	LinkedList<int ,list<int> > l;

	g.add(5);
	g.add(6);
	cout<<g.contains(5)<<endl;
	cout<<g.contains(0)<<endl;
	cout<<g.poll()<<endl;
	cout<<g.poll()<<endl;
	cout<<g.contains(5)<<endl;
	cout<<g.contains(6)<<endl;





}
