#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class node{
public:
    int data;
    node* left;
    node* right;

    node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

node* buildTree(node * root) {

    int d;
    cout << "Enter data : ";
    cin >> d;

    // base case
    if(d == -1){
        return NULL;
    }

    // create new node
    root = new node(d);

    cout << "Enter left child of " << d << endl;
    root->left = buildTree(root->left);

    cout << "Enter right child of " << d << endl;
    root->right = buildTree(root->right);

    return root;
}

void BuildTreeFromLevelOrder(node* root){
    queue<node*> q;
    int d;
    cout<<"enter data : ";
    cin>>d;
    
    root=new node(d);
    q.push(root);

    while( !q.empty() ){
        node* temp=q.front();
        q.pop();

        cout<<"enter data for left of "<<temp->data << endl;
        int leftData;
        cin>>leftData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }

        cout<<"enter data for right of "<<temp->data << endl;
        int rightData;
        cin>>rightData;

        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }
    }
    cout<<"tree created successfully !!!"<<endl;
}

void LevelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL); //  to identify the end of a level

    while( !q.empty() ) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL){ // if the traversal is shifted to the next level
            cout<<endl;

            // if there are child nodes left
            if( !q.empty() ) {
                q.push(NULL);
            }
        }

        else{
            cout<< temp -> data << " ";
            if(temp -> left){
                q.push(temp->left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void ReverseLevelOrder(node* root){

    if(root == NULL) 
        return;

    queue<node*> q;
    stack<node*> s;

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        s.push(temp);

        // IMPORTANT: right first
        if(temp->right){
            q.push(temp->right);
        }
        if(temp->left){
            q.push(temp->left);
        }
    }

    while(!s.empty()){
        cout << s.top()->data << " ";
        s.pop();
    }
}

void inorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout<<root -> data <<" ";
    inorder(root -> right);
}

void preorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    cout<<root -> data <<" ";
    inorder(root -> left);
    inorder(root -> right);
}

void postorder(node* root){
    // base case
    if(root == NULL){
        return;
    }

    postorder(root -> left);
    postorder(root -> right);
    cout<<root -> data <<" ";
}

int main(){
    node* root = NULL;
    root=buildTree(root);
    cout<<endl;

    // creating tree from level order traversal
    BuildTreeFromLevelOrder(root);
    cout<<endl;

    // tree values -> 7 6 4 -1 -1 3 -1 -1 5 2 -1 -1 1 -1 -1

    // printing the level order traversal
    cout<<"Level Order Traversal : "<<endl;
    LevelOrderTraversal(root);
    
    cout<<endl<<"Reversed Level Order Traversal : "<<endl;
    ReverseLevelOrder(root);

    cout<<endl<<"Inorder Traversal : ";
    inorder(root);
    cout<<endl;

    cout<<endl<<"Preorder Traversal : ";
    preorder(root);
    cout<<endl;

    cout<<endl<<"Postorder Traversal : ";
    postorder(root);
    cout<<endl;

    return 0;
}