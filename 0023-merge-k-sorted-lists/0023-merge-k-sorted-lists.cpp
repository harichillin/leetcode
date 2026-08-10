class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> arr;

        for(int i = 0; i < lists.size(); i++) {
            ListNode* temp = lists[i];

            while(temp != nullptr) {
                arr.push_back(temp->val);
                temp = temp->next;
            }
        }

        sort(arr.begin(), arr.end());

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        for(int x : arr) {
            ListNode* newNode = new ListNode(x);

            if(head == nullptr) {
                head = newNode;
                tail = newNode;
            }
            else {
                tail->next = newNode;
                tail = newNode;
            }
        }

        return head;
    }
};