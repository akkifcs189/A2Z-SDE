//Contents:
//  Pairs
//  Vectors
//	Lists
//	Deque

#include <iostream>
#include <utility>		//this is for pair container
#include <vector>		//this is for vector container
#include <list>			//this is for list container		
#include <deque>		//this is for deque container
using namespace std;

void explainPairs() {
    pair<int, int> p1 = {2, 3};
    cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {4, {5, 6}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> p[] = {{2, 4}, {3, 6}, {4, 8}};
    cout << p[0].second << endl;
}

void explainVectors() {
    vector<int> v;      //{}
    v.push_back(20);    //{20}
    v.emplace_back(30); //{20, 30}

    vector<pair<int, int>> vp;
    vp.push_back({2, 3});
    vp.emplace_back(4, 5);   //No need of curly brace

    vector<int> v1(5, 200); //{200, 200, 200, 200, 200}
    vector<int> v1copy(v1);

    //Iterations
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++) {
    	cout << *(it) << " ";
    } cout << endl;
    
    for(auto it = v.begin(); it != v.end(); it++) {
    	cout << *(it) << " ";
    } cout << endl;
	
	for(auto it : v) {
		cout << it << " ";
	} cout << endl;
	
	//Deletions
	vector<int> vd = {20, 30, 40, 50, 60};
	vd.erase(vd.begin() + 2);					//erase(iterator)
	vd.erase(vd.begin() + 2, vd.begin() + 4);	//erase[start, end) -> end not included
	
	//Insertions
	vector<int> vi = {2, 200};					//{200, 200}
	vi.insert(vi.begin(), 300);					//{300, 200, 200}
	vi.insert(vi.begin() + 1, 2, 10);			//{300, 10, 10, 200, 200}
	
	vi.insert(vi.begin(), v.begin(), v.end());	//{20, 30, 300, 10, 10, 200, 200}

	//Other Functions
	v.size();		//size
	v.pop_back();	//deletes last element
	v.clear();		//clears vector
	v.empty();		//true if vector is empty
}

void explainLists() {
	list<int> ls;
	
	ls.push_back(20);
	ls.emplace_back(30);
	
	ls.push_front(40);
	ls.emplace_front(50);
	
	for(auto it: ls)
		cout << it << " ";
}

void explainDeque() {
	deque<int> dq;
	
	dq.push_back(20);		//{20}
	dq.emplace_back(30);	//{20, 30}
	dq.push_front(50);		//{50, 20, 30}
	dq.emplace_front(60);	//{60, 50, 20, 30}
	
	dq.pop_back();			//{60, 50, 20}
	dq.pop_front();			//{50, 20}
	
	dq.back();				//20
	dq.front();				//50
}

int main() {

    //explainPairs();
    
    //explainVectors();
    
    explainLists();

    return 0;
}
