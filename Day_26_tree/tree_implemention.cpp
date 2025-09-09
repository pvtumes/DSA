#include <iostream>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// Function to build the tree using preorder input
Node *buildTree(Node *root)
{
    cout << "Enter node data (-1 for NULL): ";
    int data;
    cin >> data;
    if (data == -1)
    {
        return nullptr;
    }

    Node *temp = new Node(data);

    cout << "Inserting left child of " << data << endl;
    temp->left = buildTree(temp->left);

    cout << "Inserting right child of " << data << endl;
    temp->right = buildTree(temp->right);

    return temp;
}

// Level Order Traversal
void levelOrderTra(Node *root)
{
    if (root == nullptr)
    {
        cout << "Tree is empty" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        cout << temp->data << " -> ";
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
    cout << "NULL" << endl;
}

// Inorder Traversal (Left, Root, Right)
void inorderTra(Node *root)
{
    if (root == nullptr)
        return;
    inorderTra(root->left);
    cout << root->data << " ";
    inorderTra(root->right);
}

// Preorder Traversal (Root, Left, Right)
void preorderTra(Node *root)
{
    if (root == nullptr)
        return;
    cout << root->data << " ";
    preorderTra(root->left);
    preorderTra(root->right);
}

// Postorder Traversal (Left, Right, Root)
void postorderTra(Node *root)
{
    if (root == nullptr)
        return;
    postorderTra(root->left);
    postorderTra(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = nullptr;

    cout << "\n=== Build Your Binary Tree ===\n";
    root = buildTree(root);

    cout << "\n Level Order Traversal: ";
    levelOrderTra(root);

    cout << "\n Inorder Traversal (Left, Root, Right): ";
    inorderTra(root);
    cout << endl;

    cout << "\n Preorder Traversal (Root, Left, Right): ";
    preorderTra(root);
    cout << endl;

    cout << "\n Postorder Traversal (Left, Right, Root): ";
    postorderTra(root);
    cout << endl;

    return 0;
}
