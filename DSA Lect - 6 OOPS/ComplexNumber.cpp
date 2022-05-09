class ComplexNumber{
    private:
    int real;
    int imaginary;
    public:
    ComplexNumber(int real,int imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }
    void plus(ComplexNumber const &c){
        real = this.real+c.real;
        imaginary = this.imaginary+c.imaginary;
    }
    void multiply(ComplexNumber const &c){
        int real1 = this->real*c.real;
        int img1 = this.imaginary*c.real;
        int img2 = this.real*c.imaginary;
        int real2 = this.imaginary*c.imaginary*(-1);
        real = real1+real2;
        imaginary = img1+img2; 
    }
    void print(){
        cout<<real<<" + "<<imaginary<<"i"<<endl;
    }
};