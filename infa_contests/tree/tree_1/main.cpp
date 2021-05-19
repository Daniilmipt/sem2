#include <iostream>
#include <queue>


class TreeNode
{ private:
    double date;
    int key;
    TreeNode *left;
    TreeNode *right;
  public:
      void add_Node(int x, double p, TreeNode *&MyTree);
      void check(TreeNode *&Tree);
};

void add_Node(int x, double p, TreeNode *&MyTree)
{
    if (MyTree == NULL)
    {
        MyTree = new TreeNode;
        MyTree->date = p;
        MyTree->key = x;
        MyTree->right = MyTree->left = NULL;
    }

    if (p < MyTree->date)
    {
        if (MyTree->left != NULL) add_Node(x,p,MyTree->left);
        else
        {
            MyTree->date = p;
            MyTree->key = x;
            MyTree->left=MyTree->right=NULL;
        }
    }


    if (p > MyTree->date)
    {
        if (MyTree->right != NULL) add_Node(x,p,MyTree->right);
        else
        {
            MyTree->date = p;
            MyTree->key = x;
            MyTree->left=MyTree->right=NULL;
        }
    }
}


void check(TreeNode *&Tree)
{
    if (Tree != NULL)
    {
        std::cout << Tree->date << " ";
        check(Tree->left);
        check(Tree->right);
    }
}

/*
void levelOrderPrint(TreeNode *root)
{
    if (root = NULL) return;
    queue<TreeNode *> q;
    q.push(root)

    while(!q.empty())
    {
        TreeNode* temp = q.front();
        q.pop();
        std::cout << temp->date << " ";
        if (temp->left != NULL ) q.push(temp->left);
        if (temp->right != NULL) q.push(temp->right);
    }
}

void preorderPrint(TreeNode *root)
{
    if (root == NULL) return;
    std::cout << root->date << " ";
    preorderPrint(root->left);
    preorderPrint(root->right);
}


void inorderPrint(TreeNode *root)
{
    if (root == NULL) return;
    inorderPrint(root->left);
    std::cout << root->date << " ";
    inorderPrint(rrot->right);
}

void postorderPrint(TreeNode *root)
{
    if (root == NULL) return();
    postorderPrint(root->left);
    postorderPrint(root->right);
    std::cout << root->date << " ";
}
*/

int main()
{
    TreeNode *root = NULL;
    TreeNode tree;
    for (int i = 0; i < 10;++i)
    {
        tree.add_Node(i, i*i, root);
    }
    tree.check(root);
}
