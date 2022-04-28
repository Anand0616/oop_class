#include<iostream>

using namespace std;

class Point{
    int x;
    int y;
public:
    Point(int X,int Y){
        x = X;
        y = Y;
    }

void print(){
    cout<<"("<< x << ","<< y << ")";
}
};

class AbstractNavigation{
    virtual void goHome() = 0;
    virtual void goSChool() = 0;
    virtual Point setSchoolLocation(Point point) = 0;
    virtual Point setHomeLocation(Point point) = 0;
    virtual Point currentLocation() = 0;
};

class LowLevelNavigation {
    int x = 0;
    int y = 0;
public:
    void goOrigin(){
        x = 0;
        y = 0;
    }
    void goRight3(){
        x += 3;
        
    }
    void goLeft2(){
        x -= 2;
    }
    void goUp3(){
        y -= 3;
        
    }
    void goDown2(){
        y += 2;
    }
};

class HighLevelNavigation : AbstractNavigation{
    LowLevelNavigation navigator = LowLevelNavigation();
    Point schoolLocation = Point(0, 0);
    Point homeLocation = Point(0, 0);
public:

    void goHome(){
        navigator.goOrigin();
    }
    void goSchool(){
        
    }
    Point setSchoolLocation(){
        
    }

};

void main(){
    auto busDriver = HighLevelNavigation();
    busDriver.setSchoolLocation(Point(2,4));
    busDriver.setHomeLocation(Point(1, 1));
    busDriver.goHome();
    busDriver.CurrentLocation().print();
    busDriver.goSchool();
    busDriver.CurrentLocation().print();

}
