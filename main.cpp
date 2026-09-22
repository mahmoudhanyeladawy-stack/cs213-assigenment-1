#include "Image_Class.h"

#include <iostream>

using namespace std;

int main(){

Image image("luffy-egghead.png");
for(int i=0;i<image.width;i++){

    for(int j=0;j<image.height;j++){

        for(int k=0;k<image.channels;k++){

           image(i,j,k)=255; 
        }
    }
}
image.saveImage("luffy.png");
cout<<"Image saved successfully!"<<endl;
  return 0;  
}