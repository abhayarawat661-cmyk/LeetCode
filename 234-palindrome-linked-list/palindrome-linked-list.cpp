class Solution {
public:
bool isPalindrome(ListNode* head) {
int arr[100000];
int n = 0;

    ListNode* temp = head;

    while (temp != nullptr) {
        arr[n] = temp->val;
        n++;
        temp = temp->next;
    }

    int i = 0;
    int j = n - 1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            return false;
        }

        i++;
        j--;
    }

    return true;
}


};
