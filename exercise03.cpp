#include <iostream>

using namespace std;

int volume(int height, int width, int length);

// 1. Define a structure called Box
// have the integer data types Height, Width, Length

// Do not change the main function
struct Box1{
  int height;
  int width ;
  int length ;
};
struct Box2{
  int height;
  int width;
  int length;
};

int main() {
    // 2. Create a variable called box1 of the Box structure type
    // int box1Height, box1Width, box1Length;
    // 3. Create a variable called box2 of the Box structure type
    struct Box1 b1;
    struct Box2 b2;
    // int box2Height, box2Width, box2Length;
    int totalVolume;
    
    // 4. Input the height, width, lenght of box1 and box2
    cout << "Enter Box 1 Height : ";
    cin >>b1.height;
    cout << "Enter Box 1 Width : ";
    cin >> b1.width;
    cout << "Enter Box 1 Length : ";
    cin >> b1.length;
    
    cout << "Enter Box 2 Height : ";
    cin >> b2.height;
    cout << "Enter Box 2 Width : ";
    cin >> b2.width;
    cout << "Enter Box 2 Length : ";
    cin >> b2.length ;
    
    // 5. Replace the coding below to pass the Box type structure
    totalVolume = volume( b1.height,b1.width ,b1.length )
             + volume(  b2.height ,b2.width , b2.length);
    
    cout << "Volume of Box is " << totalVolume << endl;
    
    return 0;
}

// Implement the functions here
int volume(int height,int width,int length)
{
  int ans;
  ans = height * width * length;
  return ans;
}