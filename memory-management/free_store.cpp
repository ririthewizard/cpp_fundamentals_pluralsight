// free_store.cpp : Defines the entry point for the console application.

#include "resource.h"
#include <string>
using std::string;

int main(){
    {
        Resource localResource ("local");
        string localString = localResource.GetName();
    }

    Resource* pResource = new Resource("created with new");
    string newString = pResource->GetName();
    int j = 3;
    delete pResource;

    string string4 = pResource->GetName();

    return 0;
}