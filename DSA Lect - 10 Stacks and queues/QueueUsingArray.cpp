template <typename T>
class QueueUsingArray{
    T *data;
    int firstIndex;
    int nextIndex;
    int size;
    int capacity;
    public:
    QueueUsingArray(int totalSize){
        data = new T[totalSize];
        firstIndex = -1;
        nextIndex = 0;
        size = 0;
        capacity = totalSize;
    }
    void enqueue(T element){
        if(size==capacity){
            cout<<"queue is full"<<endl;
            return;
        }
        if(firstIndex==-1){
            firstIndex=0;
        }
        data[nextIndex] = element;
        nextIndex = (nextIndex+1)%capacity;
        size++;
    }
    T dequeue(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        T ans = data[firstIndex];
        firstIndex = (firstIndex+1)%capacity;
        size--;
        if(size==0){
            firstIndex = -1;
            nextIndex = 0;
        }
        return ans;
    }
    T front(){
      if(isEmpty()){
            cout<<"queue is empty"<<endl;
            return -1;
        }  
        return data[nextIndex];
    }
    int getSize(){
        return size;
    }
    bool isEmpty(){
        return size==0;
    }
};