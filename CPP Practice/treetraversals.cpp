// Inorder : Left Node Right
// Preorder : Node Left Right
// Postorder : Left Right Node
#include <iostream>
#include <stack>
#include <queue>

using namespace std;
class node
{
public:
  int data;
  node *left;
  node *right;

  node(int d)
  {
    this->data = d;
    this->left = NULL;
    this->right = NULL;
  }
};

node *rootCreation(node *root)
{

  cout << "Enter the data for node: " << endl;
  int data;
  cin >> data;

  root = new node(data);
  if (data == -1)
    return NULL;

  cout << "Enter data for insering in left of" << data << endl;
  root->left = rootCreation(root->left);
  cout << "Enter data for insering in right of " << data << endl;
  root->right = rootCreation(root->right);

  return root;
}

void inOrder(node *root)
{
  // Base Case
  if (root == NULL)
  {
    return;
  }

  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}

void preOrder(node *root)
{
  // Base Case
  if (root == NULL)
  {
    return;
  }

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

void postOrder(node *root)
{
  // Base Case
  if (root == NULL)
  {
    return;
  }

  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

int main()
{
  node *root = NULL;

  root = rootCreation(root);

  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

  inOrder(root);
  cout << endl;
  preOrder(root);
  cout << endl;
  postOrder(root);

  stack<node *> s;
  s.push(root);
  while (!s.empty())
  {
    node *temp = s.top();
    if (temp->left)
    {
      s.push(temp->left);
    }
    else if (temp->right)
    {
      s.push(temp->right);
    }
    else
    {
      cout<<temp->data<<" ";
      // s.pop();
    }
  }
  return 0;
}