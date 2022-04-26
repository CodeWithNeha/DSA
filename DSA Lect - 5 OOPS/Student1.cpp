class Student1{
    public: int rollno;
    private: int age;
    public:
    void display(){
        cout<<age<<endl;
    }
    Student1(){
        cout<<"Constructor"<<endl;
    }
     Student1(int r){
        cout<<"Constructor"<<r<<endl;
    }
};