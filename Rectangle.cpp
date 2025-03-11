#include <bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    int length,width;
public:
    Rectangle():length(2),width(1){}
    Rectangle(int l):length(2*l),width(l){}
    Rectangle(int l,int w):length(l),width(w){}
    Rectangle(const Rectangle &r):length(r.length),width(r.width){}
    int getLength(){
        return length;
    }
    int getWidth(){
        return width;
    }
    void setLength(int l){
        length = l;
    }
    void setWidth(int w){
        width = w;
    }
    int area(){
        return length*width;
    }
    int perimeter() const{
        return 2*(length+width);
    }
    void show(){
        cout<<"rectangle:length="<<length<<",width="<<width<<",area="<<area()<<",perimeter="<<perimeter()<<endl;
    }
};

bool cmp(const Rectangle &a,const Rectangle &b){
    return a.perimeter() < b.perimeter();
}
int main(){
    int n,len,wid;
    cin>>n;
    Rectangle *p = new Rectangle[n];
    for(int i=0;i<n;i++){

        cin>>len>>wid;
        p[i].setLength(len);
        p[i].setWidth(wid);
    }
    sort(p,p+n,cmp);

    for(int i=0;i<n;i++){
        p[i].show();
    }
    delete []p;
    
    return 0;

    // Rectangle r1;
    // Rectangle r2(3);
    // Rectangle r3 = r2;
    // r3.show();
    // return 0;

}