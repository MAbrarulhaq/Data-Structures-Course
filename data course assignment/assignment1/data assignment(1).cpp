#include<iostream>
using namespace std;
class node{
    public:
        int info;
        node *next;
        node(int val){
            info=val;
            next=NULL;
        }     
};
class linkedlist{
    private:
        node* head;
        int length;
    public:
        linkedlist(){
            head=NULL;
            length=0;
        }
        void insertion(int val,int pos){
            if(pos<1 || pos>length+1){
                return;
            }
            node* n=new node(val);
            if(pos==1){
                n->next=head;
                head=n;
                length++;
            }
            else{
                node* temp=head;
                for(int i=1;i<pos-1;i++){
                    temp=temp->next;
                }
                n->next=temp->next;
                temp->next=n;
                length++;
            }
        }
    void swapNodes(int lPos, int rPos) {
        if (lPos == rPos) { 
        return;
     }
    node* prev1 = NULL;
    node* curr1 = head;
    for (int i = 1; i < lPos && curr1; i++) {
        prev1 = curr1;
        curr1 = curr1->next;
    }
    node* prev2 = NULL;
    node* curr2 = head;
    for (int i = 1; i < rPos && curr2; i++) {
        prev2 = curr2;
        curr2 = curr2->next;
    }
    if (curr1==0 || curr2==0) { 
        return;
    }
    if (prev1 == NULL) {
        head = curr2;
    }
    else {
        prev1->next = curr2;
    }
    if (prev2 == NULL) {
        head = curr1;
    }
    else {
        prev2->next = curr1;
    }
    node* temp = curr2->next;
    curr2->next = curr1->next;
    curr1->next = temp;
}
     void printing(){
            node *n=head;
            while(n!=NULL){
                cout<<n->info<<"\t";
                n=n->next;
            }
            cout<<endl;
            cout<<"-----------------------------------:"<<endl;
        }
};
int main(){
    linkedlist l1;
    l1.insertion(66,1);
    l1.insertion(41,2);
    l1.insertion(33,3);
    l1.insertion(42,4);
    l1.insertion(43,5);
    l1.insertion(44,6);
    l1.printing();

    l1.swapNodes(2,5);
    l1.printing();
}#include<iostream>
using namespace std;
class node{
    public:
        int info;
        node *next;
        node(int val){
            info=val;
            next=NULL;
        }     
};
class linkedlist{
    private:
        node* head;
        int length;
    public:
        linkedlist(){
            head=NULL;
            length=0;
        }
        void insertion(int val,int pos){
            if(pos<1 || pos>length+1){
                return;
            }
            node* n=new node(val);
            if(pos==1){
                n->next=head;
                head=n;
                length++;
            }
            else{
                node* temp=head;
                for(int i=1;i<pos-1;i++){
                    temp=temp->next;
                }
                n->next=temp->next;
                temp->next=n;
                length++;
            }
        }
    void swapNodes(int lPos, int rPos) {
        if (lPos == rPos) { 
        return;
     }
    node* prev1 = NULL;
    node* curr1 = head;
    for (int i = 1; i < lPos; i++) {
        prev1 = curr1;
        curr1 = curr1->next;
    }
    node* prev2 = NULL;
    node* curr2 = head;
    for (int i = 1; i < rPos; i++) {
        prev2 = curr2;
        curr2 = curr2->next;
    }
    if (prev1 == NULL) {
        head = curr2;
    }
    else {
        prev1->next = curr2;
    }
    if (prev2 == NULL) {
        head = curr1;
    }
    else {
        prev2->next = curr1;
    }
    node* temp = curr2->next;
    curr2->next = curr1->next;
    curr1->next = temp;
}
     void printing(){
            node *n=head;
            while(n!=NULL){
                cout<<n->info<<"\t";
                n=n->next;
            }
            cout<<endl;
            cout<<"-----------------------------------:"<<endl;
        }
};
int main(){
    linkedlist l1;
    l1.insertion(66,1);
    l1.insertion(41,2);
    l1.insertion(33,3);
    l1.insertion(42,4);
    l1.insertion(43,5);
    l1.insertion(44,6);
    l1.printing();

    l1.swapNodes(2,5);
    l1.printing();
}