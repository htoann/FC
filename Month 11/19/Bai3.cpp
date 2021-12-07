#include<iostream>
using namespace std;

class Shape{
public:
    virtual void print() = 0;
    virtual float area() = 0;
    virtual void input() = 0;
    string type;
};

class TwoDimensional : public Shape{
public:
    virtual float perimeter() = 0;
};

class Circle : public TwoDimensional{
public:
    float radius;
    const float PI = 3.14;

    Circle(){}

    void print(){
        cout<<"Area: "<< area()<<endl;
        cout<<"Perimeter: "<<perimeter()<<endl;
    }
    float area(){
        return PI * radius * radius;
    }
    float perimeter(){
        return 2 * PI * radius ;
    }
    void input(){
        cout<<"Enter radius: ";
        cin>>radius;
        type = "circle";
    }
};

class ThreeDimensional : public Shape{
public:
    virtual float volume() = 0;
};

class Sphere : public ThreeDimensional{
public:
    float radius;

    Sphere(){}

    void print(){
        cout<<"Area: "<< area()<<endl;
        cout<<"Volume: "<<volume()<<endl;
    }
    float area(){
        return 4 * 3.14 * radius * radius;
    }
    float volume(){
        return 4 / 3 * 3.14 * radius * radius * radius;
    }

    void input(){
        cout<<"Enter radius: ";
        cin>>radius;
        type = "sphere";
    }
};

class listShape{
public:
    Shape *sh[100];
    int k;

    void inputShapeList(){
        int choose;
        k = 0;
        while(k<100){
            cout<<"1. Circle\n2. Sphere\n3. Exit"<<endl;
            cout<<"Choose(1, 2, 3): "; 
            cin>>choose;
            if(choose ==1){
                sh[k] = new Circle();
            }
            if(choose ==2){
                sh[k] = new Sphere();
            }    
            if(choose != 1 and choose != 2){
                break;
            }
            sh[k]->input();
            k++;
        }
    }

    void ouputCircleIformation(){
        cout<<"Circle information: "<<endl;
        for (int i = 0 ; i < k ; i ++){
            if(sh[i]->type == "circle"){
                sh[i]->print();
            }
        }
    }

    template <class val>
    void swapVal(val &a , val &b){
        val temp;
        temp = a;
        a = b;
        b = temp;
    }

    void sortByArea(){
        cout<<"Sort by area: "<<endl;
        for (int i=0;i<k-1;i++){
            for (int j=i+1;j<k;j++){
                if(sh[i]->area() < sh[j]->area()){
                    swapVal(sh[i], sh[j]);
                }
            }     
        }

        for(int i = 0 ; i < k ; i++){
            sh[i]->print();
        }
    }
};

int main(){
    listShape list;
    list.inputShapeList();
    list.ouputCircleIformation();
    list.sortByArea();
}
