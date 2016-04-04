//Partner: Chris Considine

#include "LSorter.h"

//worst case runtime n^2
//constant space

LNode* LSorter::sortList(LNode* head) 
{    
    LNode randomNode(0); //initialize node of random value
    LNode* current = head; 

    while (current != 0) //make sure current is pointing to something 
    {
        LNode* insertCurrent =  randomNode.next; 
        LNode* insertPrevious = NULL;

        while (insertCurrent != 0) //don't reach end of linked list
        {
            if (insertCurrent->val > current->val) //no need to do anything
                break;

            insertPrevious = insertCurrent; //moving through the linked list
            insertCurrent = insertCurrent->next;
        }

		//if insertPrevious isn't pointing to anything, point to &randomNode
        if (insertPrevious == 0)
            insertPrevious = &randomNode;

		//swap values that current and insertPrevious are pointing to 
        LNode* temp = current->next;
        current->next = insertPrevious->next; 
        insertPrevious->next = current;
        current = temp;
    }

    return randomNode.next; //sorted linked list
}

