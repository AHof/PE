#include <iostream>
#include <cmath>

using namespace std;

int recursive_contains (int checkWidth, int checkHeight, int width, int height){
    if((checkWidth > 1) && (checkHeight > 1)){
        return (((height+1)-checkHeight)*((width+1)-checkWidth)) + recursive_contains(checkWidth,checkHeight-1,width,height) + recursive_contains(checkWidth-1,checkHeight,width,height);
    }else if((checkWidth > 1) && (checkHeight == 1)){
        return (((width+1)-checkWidth)*height);
    }else if((checkHeight > 1) && (checkWidth == 1)){
        return (((height+1)-checkHeight)*width) + recursive_contains(checkWidth,checkHeight-1,width,height);
    }else{
        return (width * height);
    }
}

int main(){
    int closestSoFar = 0;
    int width = 1;
    int height = 1;
    int rectangle = width * height;
    int recurse = 0;

    cout << recursive_contains(3,2,3,2);

    for(int i = 1; i <= 2000; i++){
        for(int j = 1; j <= 2000; j++){
            recurse = recursive_contains(i,j,i,j);
            if (abs(2000000-recurse) < abs(2000000-closestSoFar)){
                closestSoFar = recurse;
                cout << i << ", " << j << ", " << closestSoFar;
            }
            if(recurse > closestSoFar){
                break;
            }
        }


    }



}
