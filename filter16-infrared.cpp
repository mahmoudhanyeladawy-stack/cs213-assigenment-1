#include "Image_Class.h"
#include <filesystem>
#include <iostream>

using namespace std;

int main() {
    Image image("test.png");

    for (int y = 0; y < image.height; ++y) {
        for (int x = 0; x < image.width; ++x) {
            unsigned char green = image.getPixel(x, y, 1);
            unsigned char blue  = image.getPixel(x, y, 2);

            image.setPixel(x, y, 0, 255);
            image.setPixel(x, y, 1, 255 - green);
            image.setPixel(x, y, 2, 255 - blue);
        }
    }

    std::filesystem::create_directories("output");
    image.saveImage("output/infrared_result.png");
    cout << "Image saved successfully to output/infrared_result.png" << endl;

    return 0;
}