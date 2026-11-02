#include <iostream>
using namespace std;

//struct Element {
//	char letter;
//	int priority;
//
//	void print1() {
//		cout << letter << " : " << priority << " | ";
//	}
//};
//
//class QueuePriority {
//	Element* elements;
//	int count;
//public:
//	QueuePriority() :elements(nullptr), count(0) {}
//	
//	void enqueue(Element el) {
//		int index = 0;
//		while (index<count and elements[index].priority < el.priority)index++;
//
//		Element* temp = new Element[count + 1];
//		for (int i = 0; i < count; i++)
//		{
//			temp[i] = elements[i];
//		}
//		temp[index] = el;
//		for (int i = index; i < count; i++)
//		{
//			temp[i + 1] = elements[i];
//		}
//
//		if (elements != nullptr)
//			delete[]elements;
//		elements = temp;
//		count++;
//	}
//
//	bool isEmpty()const {
//		return count == 0;
//	}
//
//	Element dequeue() {
//		if (!isEmpty())
//		{
//			Element first = elements[0];
//			for (int i = 0; i < count; i++)
//				elements[i] = elements[i + 1];
//
//			count--;
//			return first;
//		}
//	}
//
//	void print() {
//		cout << "=================queue================" << endl;
//		for (int i = 0; i < count; i++)
//		{
//		elements[i].print1();
//		}
//		cout << endl;
//		cout << "=================queue================" << endl;
//
//	}
//
//	~QueuePriority()
//	{
//		if (elements!=nullptr)
//			delete[]elements;
//	}
//
//};














template<typename T>

class QueuePriority {

	struct Element {
		T document;
		int priority;

		void print1() {
			cout << document << " : " << priority << " | ";
		}
	};

	Element* elements;
	int count;
public:
	QueuePriority() :elements(nullptr), count(0) {}
	
	void enqueue(string fileName,int priority) {
		int index = 0;
		while (index<count and elements[index].priority < priority)index++;
		index++;

		Element* temp = new Element[count + 1];
		for (int i = 0; i < count; i++)
		{
			temp[i] = elements[i];
		}
		temp[index] = Element{ fileName,priority };
		for (int i = index; i < count; i++)
		{
			temp[i + 1] = elements[i];
		}

		if (elements != nullptr)
			delete[]elements;
		elements = temp;
		count++;
	}

	bool isEmpty()const {
		return count == 0;
	}

	Element dequeue() {
		if (!isEmpty())
		{
			Element first = elements[0];
			for (int i = 0; i < count; i++)
				elements[i] = elements[i + 1];

			count--;
			return first;
		}
	}

	void print() {
		cout << "=================queue================" << endl;
		for (int i = 0; i < count; i++)
		{
		elements[i].print1();
		}
		cout << endl;
		cout << "=================queue================" << endl;

	}

	~QueuePriority()
	{
		if (elements!=nullptr)
			delete[]elements;
	}

};



int main()
{
	//practise
	QueuePriority<string> q;

	string fileName;
	int priority;

	

	int choice;
	cout << "enter your choice: " << endl << endl;
		cout << "1-add document to queue" << endl;
		cout << "2-print all" << endl;
		cout << "3-exit" << endl;

	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "enter your position: " << endl << endl;
		cout << "1-guest" << endl;
		cout << "2-admin" << endl;
		cout << "3-manager" << endl;
		cout << "4-director" << endl;
		cin >> priority;
		cout << "enter file name: "; cin >> fileName;

		q.enqueue(fileName,priority);
		break;
	case 2:
		while (!q.isEmpty())
		{
			q.print();
			cout << endl;
		}
		break;

	default:
		cout << "error" << endl;
		break;
	}

	

	


	//class
	/*QueuePriority q;
	Element el = { 'a',1 };
	q.enqueue(el);
	q.enqueue(Element{'b',2});
	q.enqueue(Element{'c',3});
	q.enqueue(Element{'g',4});
	q.enqueue(Element{'k',7});
	q.print();
	q.enqueue(Element{ 'd',5 });
	q.print();
	q.enqueue(Element{ 'q',3 });
	q.print();

	while (!q.isEmpty())
	{
		cout << "deleted el: ";
		q.dequeue().print1();
		cout << endl;
	}*/






}

