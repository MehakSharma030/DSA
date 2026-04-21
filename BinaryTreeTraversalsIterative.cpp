#include<iostream>
#include<queue>
#include<stack>
#include<vector>
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

// Build Tree (Recursive Input)
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

// 🔹 Inorder (Iterative)
void inorder(node *root){
    vector<int> ans;
    stack<node*> s;
    node *curr = root;

    while(curr != NULL || !s.empty()){
        while(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();
        ans.push_back(curr->data);

        curr = curr->right;
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

// 🔹 Preorder (Iterative)
void preorder(node *root){
    vector<int> ans;
    stack<node*> s;

    if(root == NULL){
        return;
    }

    s.push(root);

    while(!s.empty()){
        node* curr = s.top();
        s.pop();

        ans.push_back(curr->data);

        // push right first
        if(curr->right){
            s.push(curr->right);
        }

        // push left second
        if(curr->left){
            s.push(curr->left);
        }
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

// 🔹 Postorder (Iterative - 2 stacks)
void postorder(node *root){
    vector<int> ans;
    stack<node*> s1, s2;

    if(root == NULL){
        return;
    }

    s1.push(root);

    while(!s1.empty()){
        node* curr = s1.top();
        s1.pop();

        s2.push(curr);

        if(curr->left){
            s1.push(curr->left);
        }
        if(curr->right){
            s1.push(curr->right);
        }
    }

    while(!s2.empty()){
        ans.push_back(s2.top()->data);
        s2.pop();
    }

    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}

int main(){
    node* root = NULL;

    // build tree
    root = buildTree(root);

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << "Preorder Traversal: ";
    preorder(root);

    cout << "Postorder Traversal: ";
    postorder(root);

    return 0;
}