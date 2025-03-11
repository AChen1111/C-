#include <bits/stdc++.h>
using namespace std;
//?单向链表

//todo:双向链表

// 定义链表
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr){}
};



//链表节点的插入
void ins (ListNode*front,int val){
    ListNode* ins = new ListNode(val);
    ins->next = front->next;
    front->next = ins;
}
//链表节点的删除   
void del(ListNode*front){
    ListNode *del = front->next;
    front->next = del->next;
    delete del;
}
//链表的遍历 返回偏移量
int each(ListNode *first,int num){
    int index = 0;
    while (first->val != num)
    {
        first = first->next;
        index++;
        if(first == nullptr)
            return -1;
    }
    return index;
    
}

//访问链表
ListNode *visit(ListNode *first,int index){
    for(int i = 0;i<index;i++){
        first = first->next;
        if(first == nullptr)
            return nullptr;
    }
    return first;
}



int main(){
//链表初始化1->2->3->4->5
ListNode *n0 = new ListNode(1);
ListNode *n1 = new ListNode(2);
ListNode *n2 = new ListNode(3);
ListNode *n3 = new ListNode(4);
ListNode *n4 = new ListNode(5);

n0->next = n1;
n1->next = n2;
n2->next = n3;
n3->next = n4;

// 
cout<<each(n0,6)<<endl;



//链表节点的插入
// ins(n0,6);
// del(n1);
// 链表节点的遍历
// for(ListNode *p = n0;p;p = p->next){
//     cout<<p->val<<endl;
// }
return 0;
}