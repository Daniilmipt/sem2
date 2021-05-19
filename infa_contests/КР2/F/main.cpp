
void build_siblings(Node* root) {
    if (root) {
        //printf("%d ", root->data);
        root->left->right_sibling = root->right;
        build_siblings(root->left);
        build_siblings(root->right);
    }
}
