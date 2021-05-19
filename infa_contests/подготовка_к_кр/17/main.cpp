int find_prev_value(list_element* root, int value){
    int date = 0;
    if (root == NULL){
        date = 0;
    } else {
        list_element* check = root;
        if (check -> next == NULL){ date = 0;}
        else{
            while (check -> next -> value != value){
                check = check -> next;
                if (check -> next == NULL) {date = 0; break;}
            }
            date = check -> value;
        }
    }
    return date;
}
