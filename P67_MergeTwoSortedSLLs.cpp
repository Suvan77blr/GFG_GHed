
// 030325 (night of 020325)
// Merge two sorted SLLs.

/* Link list Node
struct Node {
  int data;
  struct Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
class Solution {
  public:
    Node* sortedMerge(Node* head1, Node* head2) {
        // code here
        if(head1 == NULL){
            return head2;
        }
        if(head2 == NULL){
            return head1;
        }
        
        Node* result = nullptr;
        Node* i = head1;
        Node* j = head2;
        
        if(i->data < j->data){
            result = new Node(i->data);
            i = i->next;
        }
        else {
            result = new Node(j->data);
            j = j->next;
        }
        
        Node* ptr = result;
        
        while(i != nullptr and j != nullptr ) {
            if(i->data < j->data) {
                Node* newNode = new Node(i->data);
                ptr->next = newNode;
                
                i = i->next;
                ptr = ptr->next;
            }
            else {
                Node* newNode = new Node(j->data);
                ptr->next = newNode;
                
                j = j->next;
                ptr = ptr->next;
            }
        }
        
        while(i != nullptr) {
            Node* newNode = new Node(i->data);
                ptr->next = newNode;
                
                i = i->next;
                ptr = ptr->next;
        }
        
        while(j != nullptr) {
            Node* newNode = new Node(j->data);
                ptr->next = newNode;
                
                j = j->next;
                ptr = ptr->next;
        }
        
        return result;
    }
};

