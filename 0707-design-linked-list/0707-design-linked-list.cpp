class MyLinkedList {
public:
    struct node{
        int val;
        node* next;
        node(int x){
            val = x;
            next = NULL;
        }
    };
    node* head;
    MyLinkedList() {
        head = NULL;
    }
    
    int get(int index) {
        node* temp = head;
        int cnt = 0;
        while(temp!=NULL && cnt!=index){
            temp = temp->next;
            cnt++;
        }
        if(temp==NULL)return -1;
        return temp->val;
    }
    
    void addAtHead(int val) {
        node* newNode = new node(val);
        newNode->next = head;
        head = newNode;
    }
    
    void addAtTail(int val) {
        if(head == NULL) {
            addAtHead(val);
            return;
        }
        node* temp = head;
        while(temp->next!=NULL){
            temp = temp->next;
        }
        node* newNode = new node(val);
        temp->next = newNode;
    }
    
    void addAtIndex(int index, int val) {
        if(index==0) {
            addAtHead(val);
            return;
        }
        int cnt = 0;
        node* temp = head;
        while(temp!=NULL && cnt!=index-1){
            temp = temp->next;
            cnt++;
        }
        if(temp==NULL)return ;   
        node* newNode = new node(val);
        newNode->next = temp->next;
        temp->next = newNode;

    }
    
    void deleteAtIndex(int index) {
        if(head==NULL)return ;
        if(index == 0) {
            node* x = head;
            head = head->next;
            delete x;
            return;
        }
        int cnt = 0;
        node* temp = head;
        while(temp!=NULL && cnt!=index-1){
            temp = temp->next;
            cnt++;
        }
        if(temp==NULL || temp->next == NULL){
            return ;
        }
        node* x = temp->next;
        temp->next = temp->next->next;
        delete x;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */