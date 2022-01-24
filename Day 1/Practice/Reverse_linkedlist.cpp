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

    Node* nexxt;
    Node* temp1;
    Node* temp2;
    nexxt = head;
    temp1 = head->next;
    nexxt->next = NULL;
    while(temp1){
        temp2 = temp1->next;
        temp1->next = nexxt;
        nexxt = temp1;
        temp1=temp2;
    }
    while(nexxt){
        cout<<nexxt->data<<" ";
        nexxt = nexxt->next;
    }
    return 0;
}