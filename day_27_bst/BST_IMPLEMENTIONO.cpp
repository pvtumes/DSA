#include <iostream>
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
        left = right = NULL;
    }
};

Node *insert(Node *root, int value)
{
    if (root == NULL)
        return new Node(value);

    if (root->data > value)
    {
        root->left = insert(root->left, value);
    }
    else if (root->data < value)
    {
        root->right = insert(root->right, value);
    }

    return root;
}

void inorder(Node *root)
{
    if (!root)
        return;

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void preorder(Node *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preorder(root->left);

    preorder(root->right);
}

void postorder(Node *root)
{
    if (!root)
        return;

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}

bool search(Node *root, int value)
{
    if (root == NULL)
        return false;
    if (root->data == value)
        return true;

    if (root->data > value)
    {
        return search(root->left, value);
    }
    else if (root->data < value)
    {
        return search(root->right, value);
    }
}

int findMin(Node *root)
{
    while(root && root->left!=NULL){
        root=root->left;
    }
    return root->data;

}

int findMax(Node *root)
{
    while (root && root->right != NULL)
    {
        root = root->right;
    }
    return root->data;
}

Node* searchNode(Node *root, int value)
{
    if (root == NULL)
        return NULL;
    if (root->data == value)
        return root;

    if (root->data > value)
    {
        return searchNode(root->left, value);
    }
    else if (root->data < value)
    {
        return searchNode(root->right, value);
    }
}



int main()
{
    Node *root = nullptr;
    int choice, value;

    do
    {
        cout << "\n====== BST Menu ======\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Inorder Traversal\n";
        cout << "5. Preorder Traversal\n";
        cout << "6. Postorder Traversal\n";
        cout << "7. Find Minimum\n";
        cout << "8. Find Maximum\n";
        cout << "9. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter value to insert: ";
            cin >> value;
            root = insert(root, value);
            break;

        case 2:
            cout << "Enter value to delete: ";
            cin >> value;
            root = deleteNode(root, value);
            break;

        case 3:
            cout << "Enter value to search: ";
            cin >> value;
            if (search(root, value))
                cout << "Value found.\n";
            else
                cout << "Value not found.\n";
            break;

        case 4:
            cout << "Inorder Traversal: ";
            inorder(root);
            cout << endl;
            break;

        case 5:
            cout << "Preorder Traversal: ";
            preorder(root);
            cout << endl;
            break;

        case 6:
            cout << "Postorder Traversal: ";
            postorder(root);
            cout << endl;
            break;

        case 7:
            if (root != nullptr)
                cout << "Minimum value: " << findMin(root)<< endl;
            else
                cout << "Tree is empty.\n";
            break;

        case 8:
            if (root != nullptr)
                cout << "Maximum value: " << findMax(root) << endl;
            else
                cout << "Tree is empty.\n";
            break;

        case 9:
            cout << "Exiting program...\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 9);

    return 0;
}