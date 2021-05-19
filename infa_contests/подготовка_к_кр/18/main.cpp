list_element* copy_reverse(list_element* root)
{
    list_element* check = root;
    list_element* check_1 = NULL;
    int cout = 0;


    if (root != NULL)
    {



    while(check->next != NULL)
    {

      check = check -> next;
      ++cout;


    }
    ++cout;

    for (int i = 0; i < cout; ++i)
    {
        list_element* element = new list_element;
        element -> prev = check_1;
        element -> next = NULL;
        check_1 = element;
        if (element -> prev != 0) element -> prev -> next = element;

        element -> value = check -> value;
        check = check -> prev;


    }



    while (check_1 -> prev != NULL)
    {
        check_1 = check_1 -> prev;

    }

    }
    return check_1;


}
