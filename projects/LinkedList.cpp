#include <iostream>
#include "LinkedList.h"


void InitLinkedList(tLinkedList* _pList)
{
    _pList -> pHeadNode = nullptr;
    _pList -> iCount = (int)-1;
}

void PushBack(tLinkedList* _pList, int _iData)
{
    tNode* pNode = (tNode*)malloc(sizeof(tNode));
    pNode -> iData = _iData;
    pNode -> pNextNode = nullptr;

    if(_pList->iCount == -1)
    {
        _pList->pHeadNode = pNode;
    }
    else
    {
        tNode* pCurFinalNode = _pList->pHeadNode;
        while (pCurFinalNode->pNextNode)
        {
            pCurFinalNode = pCurFinalNode->pNextNode;
        }
        if (pNode != nullptr)
        {
            pCurFinalNode->pNextNode = pNode;
        }
    }
    ++_pList->iCount;
}

void Release(tNode* _pNode)
{
    if(nullptr == _pNode)
        return;

    Release(_pNode->pNextNode);

    free(_pNode);
}

void ReleaseList(tLinkedList* _pList)
{
    tNode* pDeletNode = _pList->pHeadNode;

    while (pDeletNode != nullptr)
    {
        tNode* pNext = pDeletNode->pNextNode;
        free(pDeletNode);
        pDeletNode = pNext;
    }
}