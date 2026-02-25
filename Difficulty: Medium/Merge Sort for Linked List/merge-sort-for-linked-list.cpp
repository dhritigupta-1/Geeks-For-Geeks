/*
class Node {
public:
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    Node* merge(Node* l1, Node* l2){
        Node* dummy = new Node(0);
        Node* curr = dummy;
        while(l1 && l2){
            if(l1->data <= l2->data){
                curr->next = l1;
                l1 = l1->next;
            }
            else{
                curr->next = l2;
                l2 = l2->next;
            }
            curr = curr->next;
        }
        if(l1) curr->next = l1;
        if(l2) curr->next = l2;
        return dummy->next;
    }
    Node* mergeSort(Node* head) {
        // code here
        if(!head || !head->next) return head;
        Node* slow = head;
        Node* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        Node* temp = slow->next;
        slow->next = NULL;
        Node* left = mergeSort(head);
        Node* right = mergeSort(temp);
        Node* res = merge(left, right);
        return res;
    }
};