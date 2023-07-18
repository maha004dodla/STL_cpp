    ListNode* vec_ll(vector<int>&res)
    {
        //method1:
        ListNode *head=NULL;
        ListNode *tail=NULL;
        for(auto i:res)
        {
            ListNode *nn=new ListNode();
            nn->val=i;
            nn->next=NULL;
            if(head==NULL)
            {
                head=nn;
                tail=nn;
            }
            else
            {
                tail->next=nn;
                tail=nn;
            }
        }
        return head;

        /*method 2:
        Node *head1=NULL;
        Node *tail=head1;
        for(int i=0; i<l.size(); i++)
        {
            Node *nn=new Node(l[i]);
            if(head1==NULL)
            {
                head1=nn;
                tail=head1;
            }
            else
            {
                tail->next=nn;
                tail=tail->next;
            }
        }
        return head1;*/
    }
