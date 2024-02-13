#include <iostream>
#include <list>


class website {
public:
    string name;
    string ownerName;
    int viewCount;
    list<string> publishedPages;
};

int main() 
{
    Websise LilithVilla;
    LilithVilla.name = "LilyHub";
    LilithVilla.ownerName = "Frances";
    LilithVilla.viewCount = 1500;
    LilithVilla.publishedPages = {"page1", "page2", "page3"};

    std::cout << "Name: " << LilithVilla.name << "\n";
    std::cout << "Owner name: " << LilithVilla.ownerName << "\n";
    std::cout << "viewCount: " << LilithVilla.viewCount << "\n";
    std::cout << "publishedPages: " << LilithVilla.publishedPages << "\n";
    std::cout << "pages: " << "\n";
    for (string pages: LilithVilla.publishedPages) {
        std::cout << pages << "\n";
    };
   
};