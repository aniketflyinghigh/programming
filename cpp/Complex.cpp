
class Complex{
    public:  //this keyword says that everything coming after it is in public scope
    Complex (double a, double b): r(a) ,c(b) {}

    private: //private scope to this class
    double r; //real part
    double c ; // imagenary part
};  // class defination closed

int main( int argc, char* argv[]){

    Complex* array[1000];
    for(int i =0; i<5000;i++){
        for(int j=0;j<1000;j++){
            array[j]= new Complex(i,j);
        }
       
        for(int j=0;j<1000;j++){
            delete array[j];
        }
    }
    return 0;
}//end main

/* The internal loop allocates 1000 array elemets calling new 1000 times 
   and then delets them. This happens for each times for the outer loop
   so total number of allocation and deletion = 5x10^6
   
   There are 10 million switches between kernal and user code*/


