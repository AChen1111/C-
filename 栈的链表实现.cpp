#include <iostream>
using namespace std;
struct ListNode{
    int val;
    ListNode *next;
    ListNode(int x):val(x),next(nullptr){}
};
class my_stack {
private:
    ListNode* stackTop;
    int Stack_size = 0; // 修改成员变量名称

public:
    my_stack():stackTop(nullptr){}

    int top() {
        return stackTop->val;
    }

    void push(int val) {
        ListNode* tmp = new ListNode(val);
        tmp->next = stackTop;
        stackTop = tmp;
        Stack_size++; // 修改成员变量名称
    }

    void pop() {
        ListNode* tmp = stackTop;
        stackTop = stackTop->next;
        delete tmp;
        Stack_size--; // 修改成员变量名称
    }

    int Stacksize() {
        return Stack_size; // 修改成员变量名称
    }
};
class my_queue {
private:
    ListNode* front;
    ListNode* rear;

    int Queue_size = 0;
public:
    my_queue():front(nullptr),rear(nullptr){};
    void push(int val){
        ListNode *node = new ListNode(val);
        if(front == nullptr){
            front = node;
            rear = node;
            Queue_size++;
        }
        else
        {
            rear->next = node;
            rear = node;
        }
    }
    void pop(){
        ListNode *tmp = front;
        front = front->next;
        delete tmp;
        Queue_size--;
    }
    int peek(){
        return front -> val;
    }
};
int main() {
    // my_stack s1;
    // s1.push(1);
    // cout << s1.top() << endl;
    // s1.push(2);
    // cout << s1.top() << endl;
    // s1.pop();
    // cout << s1.top() << endl;
    my_queue q1;
    q1.push(1);
    cout<<q1.peek()<<endl;
    q1.push(2);
    cout<<q1.peek()<<endl;
    q1.pop();
    cout<<q1.peek()<<endl;
}


