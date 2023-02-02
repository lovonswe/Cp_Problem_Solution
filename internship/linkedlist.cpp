
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vctr vector<ll>
#define vp vector<pair<ll, ll>>

struct node{
    ll data;
    node *nextAddress;
};

node *root;



void insertData(ll n){
    if(root==NULL){
        root = new node();
        root->data=n;
        root->nextAddress=NULL;
    }else{
        node *currentNode = root;
        node *before;

        while(currentNode!=NULL){
            before=currentNode;
            currentNode = currentNode->nextAddress;
        }
        node *newNode = new node();
        newNode->data=n;
        newNode->nextAddress=NULL;
        before->nextAddress = newNode;
    }
}

void displayAll(){
    node *Node = root;

    while(Node!=NULL){
        cout << Node->data << " ";
        Node=Node->nextAddress;
    }
    cout << endl;
}

int main()
{
    root = NULL;

    insertData(1);
    insertData(2);
    insertData(3);
    insertData(4);
    insertData(5);

    displayAll();

    insertData(6);
    insertData(7);
    insertData(8);

    displayAll();
}
