#include <bits/stdc++.h>
#include <cstddef>

using namespace std;

struct Node
{
    int val;
    Node* left;
    Node* right;
    Node(int item)
    {
        val = item;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* node, int val)
{
    if (node == NULL)
    {
        return new Node(val);
    }
    else
    {
        if (node->val > val)
        {
            node->left = insert(node->left, val);
        }
        else if (node->val < val)
        {
            node->right = insert(node->right, val);
        }

        return node;
    }
}

int height(Node* node)
{
    if (node == NULL)
    {
        return 0;
    }
    else
    {
        return max(height(node->left), height(node->right)) + 1;
    }
}

int main()
{
    int n;

    Node* root;

    if (cin >> n)
    {
        root = new Node(n);
    }

    while (cin >> n)
    {
        root = insert(root, n);
    }

    cout << height(root) << endl;
}
