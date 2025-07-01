/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution {
  public:
      Node* reverse(Node* num1)
        {
            if(num1 == NULL){
                return NULL;
            }
            Node* curr = num1;
            Node* prev = NULL;
            Node* next = NULL;
            while(curr != NULL)
            {
                next = curr->next;
                curr->next = prev;
                prev = curr;
                curr = next;
            }
            return prev;
        }
        
    Node* addTwoLists(Node* num1, Node* num2) {
        // code here
        while(num1->data == 0){
            num1 = num1->next;
        }
        while(num2->data == 0){
            num2 = num2->next;
        }
        num1 = reverse(num1);
        num2 = reverse(num2);
        Node* dummy = new Node(0);
        Node* temp = dummy;
        int carry = 0;
        while(num1 != NULL || num2 != NULL || carry != 0)
        {
            int sum = 0;
            if(num1 != NULL)
            {
                sum += num1->data;
                num1 = num1->next;
            }
            if(num2 != NULL)
            {
                sum += num2->data;
                num2 = num2->next;
            }
            sum += carry;
            Node* curr = new Node(sum % 10);
            carry = sum / 10;
            temp->next = curr;
            temp = temp->next;
        }
        dummy->next = reverse(dummy->next);
        return (dummy->next);
        
    }
};


