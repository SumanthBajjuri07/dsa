



#include <iostream>
#define n 20
using namespace std;


class queue {
    public:
     int arr[n];
     int front;
     int back;
     
     queue(){
         front = -1;
         back = -1;
     }
     
     
    void push_back(int x){
        
        if(front==n-1 || front>back){
            cout << "queue overflow condition " << endl;
            return;
        }
        
        if(front==-1 && back==-1){
            front++;
            back++;
            arr[back]=x;
            return;
        }
  
        back++;
        arr[back]=x;
    }
    
    
    
    void pop_front(){
        if(front==-1){
            cout << " queue undeflow condition " << endl;
            return;
            
        }
        
        front++;
        
    }
     
     
    void peek(){
        
        if(front==-1){
            cout << "no elements in the queue" << endl;
            return;
            
            
        }
        
        cout << arr[front] << endl;

        
    }
     
     
     
    bool empty(){
        if(front > back){
            return 1;
        }
        else {
            return 0;
        }
    }
     
   
};
















int main()
{
    
    cout<<"Hello World";
    queue q;
    q.push_back(9);
    q.push_back(5);
    q.push_back(4);
    q.push_back(3);
    q.push_back(2);
    q.pop_front();
    q.peek();
    
    
    
    
    
    

    return 0;
}
