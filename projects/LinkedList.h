#pragma once
#include <stdlib.h>

typedef struct _tagNode
{
    int iData;
    struct _tagNode* pNextNode;
}tNode;

typedef struct _tagList
{
    tNode* pHeadNode;
    unsigned int iCount;
}tLinkedList;

void InitList(tLinkedList* _pList);

void PushBack(tLinkedList* _pList, int _iData);

void ReleaseList(tLinkedList* _pList);