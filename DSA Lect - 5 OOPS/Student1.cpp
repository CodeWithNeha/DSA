class Student1{
    public: int rollno;
    private: int age;
    public:
    
    Student1(){
        cout<<"Constructor"<<endl;
    }
     Student1(int r){
        cout<<"Constructor"<<r<<endl;
    }
    Student1(int rollno,int age){
        this -> rollno = rollno;
        this -> age = age;
    }
    void display(){
        cout<<rollno<<endl;
        cout<<age<<endl;
    }
    ~Student1(){
        cout<<"Destructor"<<endl;
    }

};