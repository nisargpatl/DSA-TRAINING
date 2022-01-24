#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

int main(){
    int p;
    cin>>p;
    if(p==0) return 0;
    Node* head = new Node();
    cin>>head->data;
    if(p==1){
        cout<<head->data;
        return 0;
    }
    Node* node = head;
    for(int i=0;i<p-1;i++){
        Node* node2 = new Node();
        node->next = node2;
        cin>>node2->data;
        node = node->next;
    }
    node->next = NULL;
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}