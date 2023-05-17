#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

void levelOrder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *nd = q.front();
        q.pop();
        cout << nd->data << " ";
        if (nd->left != NULL)
            q.push(nd->left);
        if (nd->right != NULL)
            q.push(nd->right);
    }
}

void insert(Node *root, int n1, int n2, char c)
{
    if (root == NULL)
        return;
    if (root->data == n1)
    {
        if (c == 'L')
            root->left = new Node(n2);
        else
            root->right = new Node(n2);
    }
    else
    {
        insert(root->left, n1, n2, c);
        insert(root->right, n1, n2, c);
    }
}

int main()
{
    int t = 1, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        Node *root = NULL;
        while (n--)
        {
            int n1, n2;
            char c;
            cin >> n1 >> n2 >> c;
            if (root == NULL)
                root = new Node(n1);
             {
               if (c == 'L')
                    root->left = new Node(n2);
                else
                    root->right = new Node(n2);
            }
            else
                insert(root, n1, n2, c);
        }
    }
}