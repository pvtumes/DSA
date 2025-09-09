#include <iostream>
using namespace std;

class TrieNode
{
public:
    char data;
    bool isLastNode;
    TrieNode *children[26];

    TrieNode(char data)
    {
        this->data = data;
        isLastNode = false;
        for (int i = 0; i < 26; i++)
        {
            children[i] = NULL;
        }
    }
};

class Trie
{
    TrieNode *root;

public:
    Trie() { root = new TrieNode('\n'); }

    void insert(string word)
    {
        insertUtil(root, word);
    }

    void insertUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            root->isLastNode = true;
            return;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            child = new TrieNode(word[0]);
            root->children[index] = child; // ✅ fixed missing assignment
        }
        insertUtil(child, word.substr(1));
    }

    bool searchWord(string word)
    {
        return searchWordUtil(root, word);
    }

    bool searchWordUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            return root->isLastNode;
        }
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL)
        {
            child = root->children[index];
        }
        else
        {
            return false;
        }
        return searchWordUtil(child, word.substr(1));
    }

    // ✅ Logical deletion (just unmark)
    void delet(string word)
    {
        if (deletUtil(root, word))
        {
            cout << "Word logically deleted: " << word << endl;
        }
        else
        {
            cout << "Word not found: " << word << endl;
        }
    }

    bool deletUtil(TrieNode *root, string word)
    {
        if (word.length() == 0)
        {
            if (root->isLastNode)
            {
                root->isLastNode = false; // just unmark
                return true;
            }
            return false; // word not found
        }
        int index = word[0] - 'a';
        TrieNode *child = root->children[index];
        if (child == NULL)
            return false; // not found
        return deletUtil(child, word.substr(1));
    }
};

int main()
{
    Trie *t = new Trie();
    t->insert("umesh");
    t->insert("uma");

    cout << t->searchWord("umesh") << endl; // 1
    cout << t->searchWord("uma") << endl;   // 1

    t->delet("umes");                       // not found
    t->delet("umesh");                      // logically deleted
    cout << t->searchWord("umesh") << endl; // 0
    cout << t->searchWord("uma") << endl;   // 1 (still exists)

    return 0;
}
