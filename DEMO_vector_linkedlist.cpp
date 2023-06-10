    ListNode* vec_ll(vector<int>&res)
    {
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
    }
