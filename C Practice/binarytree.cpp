#include <iostream>
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

void levelOrderTraversal(node *root)
{
  queue<node *> q;
  q.push(root);
  q.push(NULL);

  while (!q.empty())
  {
    node *temp = q.front();
    cout << temp->data << endl;
    q.pop();
    if (temp == NULL)
    {
      // Ek level complete
      cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
      }
    }
    else
    {
      if (temp->left)
      {
        q.push(temp->left);
      }
      if (temp->right)
      {
        q.push(temp->right);
      }
    }
  }
}

int main()
{

  node *root = NULL;

  root = rootCreation(root);

  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

  levelOrderTraversal(root);

  return 0;
}