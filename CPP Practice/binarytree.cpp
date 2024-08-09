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
      cout << temp->data << " ";
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

void reverseLevelOrderTraversal(node *root)
{
  queue<node *> q;
  deque<node *> deq;
  q.push(root);
  deq.push_back(root);
  q.push(NULL);
  deq.push_back(NULL);

  while (!q.empty())
  {
    node *temp = q.front();
    q.pop();
    if (temp == NULL)
    {
      // Ek level complete
      // cout << endl;
      if (!q.empty())
      {
        q.push(NULL);
        deq.push_back(NULL);
      }
    }
    else
    {
      // cout << temp->data << " ";
      if (temp->left)
      {
        q.push(temp->left);
        deq.push_back(temp->left);
      }
      if (temp->right)
      {
        q.push(temp->right);
        deq.push_back(temp->right);
      }
    }
  }
  while (!deq.empty())
  {
    node *temp = deq.back();
    deq.pop_back();
    if (temp == NULL)
    {
      cout << endl;
    }
    else
    {
      cout << temp->data << " ";
    }
  }
}

int main()
{

  node *root = NULL;

  root = rootCreation(root);

  // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1

  cout << "Here starts: " << endl;

  levelOrderTraversal(root);

  cout << "Here starts Reverse Order Traversal: " << endl;

  reverseLevelOrderTraversal(root);

  return 0;
}