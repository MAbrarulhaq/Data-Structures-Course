#include <iostream>
using namespace std;

class node
{
	public:
	    int data;
	    node* next;
	    node(int data)
		{
	        this->data = data;
	        this->next = NULL;
	    }
};

class LinkedList
{
	private:
	    int length;
	public:
	    node* head;
	    LinkedList()
		{
	        head = NULL;
	        length = 0;
	    }
	    void insert(int value, int pos)
		{
	        if (pos < 1 || pos > length + 1)
			{
	            cout << "Invalid Position" << endl;
	            return;
	        }
	        node* n = new node(value);
	        if (pos == 1) {
	            n->next = head;
	            head = n;
	            length++;
	        }
	        else {
	            node* curr = head;
	            for (int i = 1; i < (pos - 1); i++)
				{
	                curr = curr->next;
	            }
	            n->next = curr->next;
	            curr->next = n;
	            length++;
	        }
	    }
	    void print()
		{
	        node* n = head;
	        while (n != NULL) {
	            cout << n->data << "--->";
	            n = n->next;
	        }
	        cout << endl;
	    }
	    void remove(int pos)
		{
	        if (pos < 1 || pos > length)
			{
	            cout << "Invalid Position" << endl;
	            return;
	        }
	        node* temp = head;
	        if (pos == 1)
			{
	            head = head->next;
	            delete temp;
	            length--;
	            return;
	        }
	        for (int i = 1; i < (pos - 1); i++)
			{
	            temp = temp->next;
	        }
	        node* del = temp->next;
	        temp->next = temp->next->next;
	        del->next = NULL;
	        delete del;
	        length--;
	    }
};

class HashTable
{
	private:
	    int capacity;
	    LinkedList* table;
	public:
	    HashTable(int V) {
	        this->capacity = V;
	        table = new LinkedList[capacity];
	    }
	    void insertItem(int key)
		{
	        int index = key % capacity;
	        table[index].insert(key, 1);
	    }
	    void deleteItem(int key) {
	        int index = key % capacity;
	        node* curr = table[index].head;
	        int pos = 1;
	        while (curr != NULL)
			{
	            if (curr->data == key)
				{
	                table[index].remove(pos);
	                cout << "Record deleted from [" << index << "][" << pos << "] --> " << key << endl;
	                return;
	            }
	            curr = curr->next;
	            pos++;
	        }
	        cout << "Record not found" << endl;
	    }
	    void searchItem(int key)
		{
	        int index = key % capacity;
	        node* curr = table[index].head;
	        int pos = 1;
	        while (curr != NULL) {
	            if (curr->data == key) {
	                cout << "Record found at [" << index << "][" << pos << "] --> " << key << endl;
	                return;
	            }
	            curr = curr->next;
	            pos++;
	        }
	        cout << "Record not found" << endl;
	    }
	    void displayHash()
		{
	        for (int i = 0; i < capacity; i++)
			{
	            cout << "table[" << i << "]";
	            table[i].print();
	        }
	    }
};

int main()
{
    int data[] = {1, 9, 23, 4, 5, 6, 7};
    int size = sizeof(data) / sizeof(data[0]);
    HashTable h(size);

    // Inserting data into hash table..
    for (int i = 0; i < size; i++) {
        h.insertItem(data[i]);
    }
    h.displayHash();
	cout<<"deleting any element:"<<endl;
    h.deleteItem(7);
    h.displayHash();
    h.searchItem(9);

    return 0;
}