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
    int numComponents(ListNode* head, vector<int>& nums) {
        vector<bool> present(10001, false);    
        for (int x : nums) {
            present[x] = true;
        }
        int ans = 0;
        bool previous = false;
        while (head != NULL) {
            if (present[head->val]) {
                if (previous == false) {
                    ans++;
                }
                previous = true;
            }
            else {
                previous = false;
            }
            head = head->next;
        }
       return ans;
    }
};
