#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

typedef struct node{
    int val;
    struct node *next;
}*Link, LinkNode;

int main()
{
    Link cur, L;
    int n;
    
    cur = L;
    cin >> n;
    for(int i = 0; i < n; i ++ )
    {
        int x;  cin >> x;
        Link newNode = new LinkNode;
        newNode->val = x;
        cur->next = newNode;
        cur = cur->next;
    }
    
    cout << "val: ";
    while(L->next != NULL)
    {
        L = L->next;
        cout << L->val << ' ';
    }
    cout << endl;
    
    return 0;
}
