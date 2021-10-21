#include<iostream>
using namespace std;
class Rectangle{

    public:
        
        Rectangle(int H, int W){
        Height = H;
        Width = W;
}
        //~Rectangle();
        
        int getPerimeter(){
            return (2*Height) + (2*Width);
        }
        int getSize(){
            return (Height * Width);
        }
        
    private:
        int Height;
        int Width;
           
};