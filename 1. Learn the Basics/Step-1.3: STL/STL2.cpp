//Contents:
//  Stack
//	Queue
//	Priority Queue

#include <iostream>
#include <stack>
#include <queue>	//works for queue and priority_queue
#include <set>		//works for set and multiset
using namespace std;

void explainStacks() {
	stack<int> st;
	st.push(20);	//{20}
	st.push(30);	//{30, 20}
	st.push(40);	//{40, 30, 20}
	st.emplace(50);	//{50, 40, 30, 20}
	
	cout << st.top() << endl;	//50
	st.pop();	//{40, 30, 20}
}

void explainQueue() {
	queue<int> q;
	q.push(20);		//{20}
	q.push(30);		//{20, 30}
	q.push(40);		//{20, 30, 40}
	q.emplace(50);	//{20, 30, 40, 50}
	
	cout << q.back() << endl;	//50
	cout << q.front() << endl;	//20
	q.pop();					//{30, 40, 50}
	cout << q.front() << endl;	//30
}

void explainPriorityQueue() {
	//Max Heap
	priority_queue<int> pq;
	pq.push(5);
	pq.push(2);
	pq.push(8);
	pq.push(20);
	
	cout << pq.top() << endl;
	pq.pop();
	cout << pq.top() << endl;
	
	//Min Heap
	priority_queue<int, vector<int>, greater<int>> pqm;
	pqm.push(5);
	pqm.push(2);
	pqm.push(8);
	pqm.push(20);
	
	cout << pqm.top() << endl;
	pqm.pop();
	cout << pqm.top() << endl;
}

void explainSet() {
	set<int> s;
	s.insert(1);	//{1}
	s.insert(5);	//{1, 5}
	s.insert(4);	//{1, 4, 5}
	s.emplace(2);	//{1, 2, 4, 5}
	
	auto it = s.find(4);	//returns iterator to 4
	auto it1 = s.find(1);	//returns iterator to 1
	auto it2 = s.find(3);	//returns s.end() iterator
	
	s.erase(2);				//erases element 2
	//s.erase(iterator);	//erases element at iterator
	//s.erase(iterator1, iterator2);	//[start, end) => end not included
	
	cout << s.count(5);		//1
	
}

void explainMultiSet() {
	multiset<int> ms;
	ms.insert(2);
	ms.insert(3);
	ms.insert(4);
	ms.insert(2);
	ms.insert(3);
	ms.insert(4);
	ms.insert(2);
	ms.insert(3);
	ms.insert(4);
	
	//ms -> {2, 2, 2, 3, 3, 3, 4, 4, 4}
	ms.erase(2);	//{3, 3, 3, 4, 4, 4}
	//ms.count(3); 	//returns 3 (i.e. the occurences)
	
	ms.erase(ms.find(3));	//{3, 3, 4, 4, 4}
	auto it1 = ms.find(3);
	//auto it2 = ms.find(3) += 2;
	//ms.erase(it1, ms.end());	//range erase issue not sure
	
	cout << ms.count(4) << endl;
}

int main() {

	//explainQueue();
	//explainPriorityQueue();
	//explainSet();
	explainMultiSet();
	
    return 0;
}
