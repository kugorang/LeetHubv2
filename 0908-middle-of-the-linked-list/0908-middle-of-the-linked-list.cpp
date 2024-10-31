/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int count = 0;   
        ListNode *currentNode = head;

        while (currentNode)
        {
            currentNode = currentNode->next;
            ++count;
        }

        count = (count >> 1) + 1;
        currentNode = head;

        while (--count)
            currentNode = currentNode->next;
        
        return currentNode;
    }
};