// Last updated: 23/2/2026, 10:48:55 pm
1class MyCircularQueue {
2public:
3    vector<int>v;
4    int rear =0;
5    int front =0;
6    int n;
7    MyCircularQueue(int k) {
8        v = vector<int>(k+1);
9        n = k+1;
10    }
11    bool enQueue(int value) {
12        if(isFull()) return false;
13        v[rear] = value;
14        rear = (rear+1)%n;
15        return true;
16    }
17    
18    bool deQueue() {
19        if(isEmpty()) return false;
20        front = (front+1)%n;
21        return true;
22    }
23    
24    int Front() {
25        if(isEmpty()) return -1;
26        return v[front];
27    }
28    
29    int Rear() {
30        if(isEmpty()) return -1;
31        int ele = (rear == 0)? n-1: rear-1;
32        return v[ele];
33    }
34    
35    bool isEmpty() {
36        return front == rear;
37    }
38    
39    bool isFull() {
40        return (rear+1)%n == front;
41
42    }
43};
44
45/**
46 * Your MyCircularQueue object will be instantiated and called as such:
47 * MyCircularQueue* obj = new MyCircularQueue(k);
48 * bool param_1 = obj->enQueue(value);
49 * bool param_2 = obj->deQueue();
50 * int param_3 = obj->Front();
51 * int param_4 = obj->Rear();
52 * bool param_5 = obj->isEmpty();
53 * bool param_6 = obj->isFull();
54 */