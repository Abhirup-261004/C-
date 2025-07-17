#include<iostream>
#include<unordered_map>
using namespace std;

class Node{
    public:
    int key,val;
    Node* next;
    Node* prev;

    Node(int k,int v){
        key=k;
        val=v;
        prev=next=NULL;
    }
};

Node* head= new Node(-1,-1);
Node* tail= new Node(-1,-1);

unordered_map<int,Node*>m;
int limit;

void addNode(Node* newNode){//O(1)
    Node* oldNext=head->next;
    head->next=new Node;
    oldNext->prev=newNode;
    newNode->next=oldNext;
    newNode->prev=head;
}
void delNode(Node* oldNode){//O(1)
    Node* oldprev=oldNext->prev;
    Node* oldNext=oldNext->next;

    oldPrev->next=oldNode;
    oldNext->prev=oldPrev;
}

LRUCache(int capacity){
    limit=capacity;
    head->next=tail;
    tail->prev=head;
}

int get(int key){ //O(1)
    if(m.find(key)==m.end()){
        return -1;
    }
    Node* ansNode=m[key];
    int ans=ansNode->val;

    m.erase(key);
    delNode(ansNode);
    addNode(ansNode);
    m[key]=ansNode;

    return ans;
}

void put(int key,int val){//O(1)
    if(m.find(key)!=m.end()){
        Node* oldNode=m[key];
        delNode(oldNode);
        m.erase(key);
    }

    if(m.size()==limit){
        m.erase(tail->prev->key);
        delNode(tail->prev);
    }
    Node* newNode=new Node(key,val);
    oldNode(newNode);
    m[key]=newNode;
}
