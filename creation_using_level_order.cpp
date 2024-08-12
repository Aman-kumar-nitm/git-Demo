#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
    
};
void build_tree(node* &root){
    queue<node*>q;
    cout<<"enter the root element"<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);
    while(!q.empty()){
      node* temp=q.front();
      q.pop();
      cout<<"enter the data for the left of"<<temp->data<<endl;
      int leftdata;
      cin>>leftdata;
      if(leftdata!=-1){
        temp->left=new node(leftdata);
        q.push(temp->left);
      }
       cout<<"enter the data for the right of"<<temp->data<<endl;
      int  rightdata;
      cin>> rightdata;
      if( rightdata!=-1){
        temp->right=new node(rightdata);
        q.push(temp->right);
      }
    }
    return;
}
void preorder(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    return;
}
int main(){
    node* root=NULL;
    build_tree(root);
    preorder(root);
    return 0;

}