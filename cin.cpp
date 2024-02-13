#include<iostream>
using namespace std;

struct node{
	int data;
	struct node *left, *right;
};

struct node *create()//first function
{
	int x;
	struct node *newnode;
	newnode = new node;
	cout << "Enter data(-1 for no node)";
	cin >> x;
	if (x==-1){
		return 0;
	}
	newnode->data=x;
	cout << "Enter left child of "<< x;
	newnode->left=create();
	cout << "Enter right child of "<< x;
	newnode->right=create();
	return newnode;
}

void preorder(struct node *r)//second function
{
	
	if(r==NULL){
 		cout <<"-";
	}
	else{
 		cout << r->data;
 		preorder(r->left);
 		preorder(r->right);
	}
}

void Inorder(struct node *r){
	if(r==NULL){
 		cout <<"-";
	}
	else{
 		Inorder (r->left);
 		cout << r->data;
 		Inorder (r->right);
	}
}

void Postorder(struct node *r){
	if(r==NULL){
 		cout <<"-";
	}
	else{
 		Postorder (r->left);
 		Postorder (r->right);
 		cout << r->data;
	}
}


int main(){
	struct node *root;
	root= NULL;
	root=create();
	
	cout << "Inorder traversal: ";
	Inorder(root);
	cout <<"\n";
	
	cout << "Preorder traversal: ";
	preorder(root);
	cout <<"\n";
	
	cout << "Postorder traversal: ";
	Postorder(root);

}
