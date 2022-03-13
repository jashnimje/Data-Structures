#include <bits/stdc++.h>
using namespace std;

void solve(ListNode *head, int count, unordered_map map)
{
    if (head == NULL || (head->left == NULL && head->right == NULL))
    {
        return;
    }
    if (head->left)
    {
        count--;
        if (map[count])
        {
            map[count] += head->val;
        }
        else
        {
            map[count] = head->val;
        }

        solve(head->left, count, map);
        count++;
    }
    if (head->right)
    {
        count++;
        if (map[count])
        {
            map[count] += head->val;
        }
        else
        {
            map[count] = head->val;
        }
        solve(head->left, count, map);
        count--;
    }
}