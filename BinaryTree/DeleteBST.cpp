#include<iostream>
using namespace std;

struct node {
	int data;
	node *left;
	node *right;
};
void NLR(node *root){
	if(root!=NULL){
		cout<<root->data<<" ";
		NLR(root->left);
		NLR(root->right);
	}
}
//create new node
node *createNode(int data){
	node *newNode = new node;
	newNode->data = data;
	newNode->right= newNode->left = NULL;
	return newNode;
}
//insert node to tree
node *insertNode(node* root, int data){
	if(root==NULL) root = createNode(data);
	else if(data<=root->data) root->left = insertNode(root->left,data);
	else root->right = insertNode(root->right,data);
	return root;
}
// find min tree
node *findMin(node *root){
	while(root->left!=NULL) root = root->left;
	return root;
}
//function to delete node
node *deleteNode(node *root, int data){
	if(root==NULL) return root;
	else if(data<root->data) root->left = deleteNode(root->left,data);
	else if(data>root->data) root->right = deleteNode(root->right,data);
	
	// found the node, get ready to delete
	else {
		// case 1: no child
		if(root->left==NULL && root->right==NULL){
			delete root;
			root = NULL;
		}
		//case 2: one child
		else if(root->left == NULL){
			node *temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL){
			node *temp = root;
			root = root->left;
			delete temp;
		}
		//case 3: 2 children
		else {
			node * temp = findMin(root->right);
			root->data = temp->data;//duplicate
			root->right= deleteNode(root->right,temp->data);
			
		}
		
	}
	return root;
}
int main(){
	node *root = NULL;
	root = insertNode(root,5);
	root = insertNode(root,10);
	root = insertNode(root,3);
	root = insertNode(root,4);
	root = insertNode(root,1);
	root = insertNode(root,11);
	
	cout<<"Initial tree:"<<endl;
	NLR(root);
	root = deleteNode(root,10);
	cout<<"\nAfter delete:"<<endl;
	NLR(root);
	
}
