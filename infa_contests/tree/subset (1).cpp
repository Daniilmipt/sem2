#include <iostream>

struct subset_node {
int key;
subset_node *left;
subset_node *right;
};

bool init(subset_node **sn){
	*sn = nullptr;
	return true;
}

bool insert(subset_node **sn, int k){
	if ((*sn) == nullptr){
	subset_node *t = new subset_node();
	t->key = k;
	t->right = nullptr;
	t->left = nullptr;
	*sn = t;
	return true;
	}
	if ((k > (*sn)->key && (*sn)->right == nullptr) ) {
		subset_node *t = new subset_node();
		t->key = k;
		t->left = nullptr;
		t->right = nullptr;
		(*sn)->right = t;
		return true;
	}
	if (k < (*sn)->key && (*sn)->left == nullptr) {
		subset_node *t = new subset_node();
		t->key = k;
		t->left = nullptr;
		t->right = nullptr;
		(*sn)->left = t;
		return true;
	}
	if ( k > (*sn)->key){
		insert(&((*sn)->right),k);
	}
	if ( k < (*sn)->key){
		insert(&((*sn)->left),k);
	}
	return false;
}


subset_node* find(subset_node *sn, int k){
	if (sn == nullptr){
		return nullptr;
	}
	if (sn->key == k){
		return sn;
	}
	if (k > sn->key){
		return find(sn->right,k);
	}
	if (k < sn->key){
		return find(sn->left,k);
	}
}



bool remove(subset_node **sn, int k){
	if (k == (*sn)->key) {
    subset_node *t1 = (*sn)->right;
    subset_node *t2 = (*sn)->left;
    delete *sn;
    if (t1 == nullptr and t2 == nullptr) {
    		*sn = nullptr;
    }
    else if (t1 == nullptr) {
    	*sn = t2;
	}
    else if (t2 == nullptr) {
    	*sn = t1;
    }
    else {
    	*sn = t2;
        subset_node *current = t2;
        while (current->right != nullptr) {
        	current = current->right;
        }
        current->right = t1;
    }
    return true;
   	}
    else if (k > (*sn)->key) {
        return remove(&((*sn)->right), k);
    }
    else if (k < (*sn)->key) {
        return remove(&((*sn)->left), k);
    }
}

unsigned int size(subset_node *sn){
	unsigned int kright = 0;
	unsigned int kleft = 0;
	if (sn != nullptr){
		if (sn->right != nullptr){
			kright += size(sn->right);
		} else kright = 0;
		if (sn->left != nullptr){
			kleft += size(sn->left);
		} else kleft = 0;
		return kright+kleft+1;
	}
	return 0;

}

unsigned int height(subset_node *sn){
	unsigned int k = 0;
	if (sn->right == nullptr && sn->left != nullptr){
		k += height(sn->left) ;
	}
	if (sn->right != nullptr && sn->left == nullptr){
		k += height(sn->right) ;
	}
	if (sn->right != nullptr && sn->left != nullptr){
	if (height(sn->right) > height(sn->left)){
		k += height(sn->right);
		} else k += height(sn->left);
	}
	return k+1;
}

void destructor(subset_node *sn){
		if (sn->right != nullptr){
			destructor(sn->right);
		}
		if (sn->left != nullptr){
			destructor(sn->left);
		}
		delete sn;

}

int* DFS (subset_node *sn){
	return nullptr;
}


void print_1(subset_node **sn)
{
    if ((*sn) != nullptr)
    {

        print_1(&((*sn)->left));
        std::cout << (*sn)->key << " ";
        print_1(&((*sn)->right));
    }
}

/*
void wide(subset_node **sn)
{
    if (!((*sn)->left == nullptr && (*sn)->right == nullptr))
    {
        std::cout << (*sn)->left->key << " " << (*sn)->right->key;
        wide((&((*sn)->left)));
        wide((&((*sn)->right)));
    }

}
*/


int main()
{
    int x;
    subset_node *root;
    init(&root);
    for (int i = 0; i < 5; ++i)
    {
        std::cin >> x;
        insert(&root, x);
    }
    std::cout << find(root,0) << std::endl;
    print_1(&root);
    std::cout << std::endl;
}
