#include <iostream>
#include "LinkedList.h"

int main()
{
    tLinkedList list = {};
    list.pHeadNode = nullptr;
    list.iCount = 0;
    
    InitList(&list);

    PushBack(&list, 100);
    PushBack(&list, 200);
    PushBack(&list, 300);

    if(list.iCount > 0)
    {
        ReleaseList(&list);    
    }

    
    return 0;
}