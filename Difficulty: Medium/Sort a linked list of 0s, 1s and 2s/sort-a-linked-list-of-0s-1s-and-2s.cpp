/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        if(!head || !head->next) return head;
        Node *l1 = new Node(0);
        Node *l2 = new Node(1);
        Node *l3 = new Node(2);
        Node *d1 = l1;
        Node *d2 = l2;
        Node *d3 = l3;
        while(head != NULL){
            if(head->data == 0){
                d1->next = head;
                d1 = d1->next;
            }
            else if(head->data == 1){
                d2->next = head;
                d2 = d2->next;
            }
            else if(head->data == 2){
                d3->next = head;
                d3 = d3->next;
            }
            head = head->next;
        }
        d3->next = NULL;
        d2->next = l3->next;
        d1->next = l2->next;
        return l1->next;
    }
};