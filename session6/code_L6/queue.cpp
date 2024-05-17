#include <iostream>
#include <queue>

using namespace std;
void print_queue(queue<int>& q)
{
	queue<int> temp = q;
	while (!temp.empty()) {
		cout << temp.front()<<", ";
		temp.pop();
	}
	cout << '\n';
}

template <typename T>
void eras_queue(queue<T>& st) {
    if(st.empty())
        return;
    st.pop();
    eras_queue(st);
}

int main()
{
	queue<int> q1;
	q1.push(1);
	q1.push(2);
	q1.push(3);

    cout << "size of queue: " << q1.size() << endl;
    cout << "The front element in queue is : " << q1.front() << endl;
	cout << "The back element in queue is : " << q1.back() << endl;
	cout << "The first queue is : ";
	print_queue(q1);

	queue<int> q2;
	q2.push(4);
	q2.push(5);
	q2.push(6);

	cout << "The second queue is : ";
	print_queue(q2);
	
    q1.swap(q2);	
	cout << "After swapping, the first queue is : ";
	print_queue(q1);
	
    cout << "After swapping the second queue is : ";
	print_queue(q2);

	cout<< q1.empty() <<endl; //returns false since q1 is not empty
    eras_queue(q1);
    cout<< q1.empty() <<endl; //returns true
	
	return 0;
}