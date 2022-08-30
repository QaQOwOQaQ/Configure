#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct Node {
    int val;
    struct Node *next;
}LinkNode, *Link;

void insert(Link &L, const int x)
{
    /* 按升序排列插入一个数有三种情况(我们希望找到第一个比它大的数)：
        1. 链表中不存在比它大的数
        2. 链表中存在比它大的数
        3. 链表中不存在节点
    */
    Link pre = L, cur = L->next;
    while(cur != NULL && cur->val < x)
    {
        pre = cur;
        cur = cur->next;
    }
    Link newNode = new LinkNode;
    newNode->val = x;
    newNode->next = cur;
    pre->next = newNode;
}

Link find(Link &L, const int x)
{
    if(L == NULL || L->next == NULL)    return NULL;
    L = L->next;
    while(L != NULL)
    {
        if(L->val == x) return L;
        if(L->val > x)  return NULL;
        L = L->next;
    }
    return NULL;
}

Link reverseLink(Link L)
{
    if(L == NULL || L->next == NULL)    return L;
    Link tail = reverseLink(L->next);
    L->next->next = L;
    L->next = NULL;
    return tail;
}

int main()
{
    Link L = new LinkNode;
    L->val = -1;
    L->next = NULL;
    
    // insert
    int n;  cin >> n;
    for(int i = 0; i < n; i ++ )
    {
        int x;  cin >> x;
        insert(L, x);
    }
    
    // out
    // cout << "Link: ";
    // while(L != NULL)   
    // {
    //     cout << L->val << ' ';
    //     L = L->next;
    // }
    // cout << endl;
    
    // find
    // int x;  cin >> x;
    // if(find(L, x))  cout << "find!" << endl;
    // else    cout << "not find" << endl;
    
    
    // reverse
    Link newL = reverseLink(L);
    cout << "reverse: ";
    while(newL != NULL)
    {
        cout << newL->val << ' ';
        newL = newL->next;
    }
    cout << endl;
    
    
    return 0;
}
