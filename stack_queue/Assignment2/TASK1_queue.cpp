#include<iostream>
using namespace std;
int q[100];
int front = -1, rear = -1, current_item = 0;

void enque(int v, int max_size){
    if(current_item == max_size){
        cout << "queue is full\n";
        return;
    }

    if(front == -1){
        front = 0;
        rear = 0;
    } else {
        rear = (rear + 1) % max_size;
    }

    q[rear] = v;
    current_item++;

    cout << "size=" << current_item << " items=";
    for(int i = 0; i < current_item; i++){
        int index = (front + i) % max_size;
        cout << q[index] << " ";
    }
    cout << endl;
}

void deque(int max_size){
    if(current_item == 0){
        cout << "size=0 items=NULL\n";
        return;
    }

    front = (front + 1) % max_size;
    current_item--;

    cout << "size=" << current_item << " items=";
    if(current_item == 0){
        cout << "NULL";
    } else {
        for(int i = 0; i < current_item; i++){
            int index = (front + i) % max_size;
            cout << q[index] << " ";
        }
    }
    cout << endl;
}

int main(){
    cout << "enter size: ";
    int N;
    cin >> N;

    cout << "enter range (T): ";
    int T;
    cin >> T;

    for(int i = 0; i < T; i++){
        cout << "enter choice (1=enqueue / 2=dequeue): ";
        int c;
        cin >> c;

        if(c == 1){
            cout << "enter value: ";
            int v;
            cin >> v;
            enque(v, N);
        } else if(c == 2){
            deque(N);
        }
    }
}
