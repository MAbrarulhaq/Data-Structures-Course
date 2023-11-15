#include<iostream>  
#include<string>
#include<math.h>
#include<stdio.h>
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

        //  void insert(int length,string x){
        //        string str;
        //        int op1,op2,res,num;
        // for(int i=0;i<length+1;i++){
        //     num=0;
        //     switch(x[i]){
        //         case '+':
        //              op1=pop();
        //              op2=pop();
        //             cout<<op2+op1<<endl;
        //             push(op2+op1);
        //             break;
        //         case '-':
        //              op1=pop();
        //              op2=pop();
        //             cout<<op2-op1<<endl;
        //             push(op2-op1);
        //             break;
        //         case '/':
        //              op1=pop();
        //              op2=pop();
        //             cout<<op2/op1<<endl;
        //             push(op2/op1);
        //             break;
        //         case '*':
        //              op1=pop();
        //              op2=pop();
        //             cout<<op2*op1<<endl;
        //             push(op2*op1);
        //             break;
        //         case '^':
        //             op1=pop();
        //             op2=pop();
        //             res=pow(op1,op2);
        //             cout<<res<<endl;
        //             push(res);

        //         // default:
        //         //    cout<<"invalid value:"<<endl;
        //         //    break;
        //         }
        //         // TO GET THE INTEGER VALUE WE HAVE SUBTRACT '0' FROM ASCII VALUE
        //          num = num * 10 + (x[i] - '0');
        //         cout<<abs(num)<<endl;
                
        //          push(num);
        //     }

        //     }
        

        void push(int num){
            
            
            node* n=new node(num);

                n->next=head;
                head=n;
                length++;

            
            
        }
        int pop(){
            node* temp=head;
            node* temp1=temp->next;
                head=temp1;
                length--;
            return temp->info;
        }

          void printing(){
            node* n=head;
            cout<<n->info<<endl;

        }
        

};
int main(){
        linkedlist l1;
        string x="623+-382/+*2^3+";
        int l= x.size();
        //cout<<l<<endl;
        l1.push(3);
        l1.push(4);
        l1.push(5);
        l1.push(6);
        l1.pop();
        l1.printing();
}