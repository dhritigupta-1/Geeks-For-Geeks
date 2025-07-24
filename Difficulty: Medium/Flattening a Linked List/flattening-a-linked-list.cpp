/* Node structure  used in the program

struct Node{
    int data;
    struct Node * next;
    struct Node * bottom;

    Node(int x){
        data = x;
        next = NULL;
        bottom = NULL;
    }

};
*/

class Solution {
  public:
    // Function which returns the root of the flattened linked list.
    Node* merge(Node* head1,Node* head2){
        Node* temp1 = head1;
        Node* temp2 = head2;
        Node* temp = nullptr;
        Node* dummy = nullptr;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->data<temp2->data){
                if(temp==nullptr)
                {
                    temp=temp1;
                    dummy = temp;
                }
                else
                {
                    temp->bottom=temp1;
                    temp=temp->bottom;
                }
                temp1=temp1->bottom;
            }
            else
            {
                if(temp==nullptr)
                {
                    dummy = temp;
                    temp=temp2;
                }
                else
                {
                    temp->bottom = temp2;
                    temp = temp->bottom;
                }
                temp2=temp2->bottom;
            }
        }
        if(temp1) temp->bottom = temp1;
        if(temp2) temp->bottom = temp2;
        return dummy;
        }
    Node *flatten(Node *head) {
        // Your code here
        if(head==nullptr && head->next==nullptr)return head;
        Node* slow = head;
        Node* temp = head->next;
        while(temp!=nullptr )
        {
            slow = merge(slow,temp);
            temp=temp->next;
        }
        return head;
    }
};