#include <iostream>
#include "vector.h"


using namespace std;

int main() 
{
    try 
    {
        mine::Vector<int> vec1;

        cout << "empty vector create. size: " << vec1.size() << ", capacity: " << vec1.capacity() << endl;

        vec1.pushback(10);
        vec1.pushback(20);
        vec1.pushback(30);

        cout << "push back vector : ";
        for (size_t i = 0; i < vec1.size(); ++i) 
        {
            cout << vec1[i] << " ";
        }
        cout << endl;

        cout << "front: " << vec1.front()  << " , back: " << vec1.back() << endl;

        cout << "element in index 1: " << vec1.at(1) << endl;

        try 
        {
            cout << "out-of-bound element (index 5) : ";
            cout << vec1.at(5) << endl;
        } 
        catch (const out_of_range& e) 
        {
            cerr << "exception: " << e.what() << endl;
        }

        vec1.resize(5);
        cout << "vector resize to 5. size: " << vec1.size()  << ", capacity: " << vec1.capacity() << endl;

        vec1.reserve(10);
        cout << "reserved capacity of 10. size: " << vec1.size() << " , capacity: " << vec1.capacity() << endl;

        vec1.popback();
        cout << "pop back vector : ";
        for (size_t i = 0; i < vec1.size(); ++i) 
        {
            cout << vec1[i] << " ";
        }
        cout << endl;

        mine::Vector<int> vec2 = vec1;
        cout << "copied vecor (vec2) : ";
        for (size_t i = 0; i < vec2.size(); ++i) 
        {
            cout << vec2[i] << " ";
        }
        cout << endl;

        vec2 += vec1;
        cout << "append vec1 to vec2 with operator+=: ";
        for (size_t i = 0; i < vec2.size(); ++i) 
        {
            cout << vec2[i] << " ";
        }
        cout << endl;

        vec2++;
        cout << "vector2 after vec2++ : ";
        for (size_t i = 0; i < vec2.size(); ++i) 
        {
            cout << vec2[i] << " ";
        }
        cout << endl;

        ++vec2;
        cout << "vector after ++vec2 : ";
        for (size_t i = 0; i < vec2.size(); ++i) 
        {
            cout << vec2[i] << " ";
        }
        cout << endl;

        vec2--;
        cout << "vector after vec2-- : ";
        for (size_t i = 0; i < vec2.size(); ++i) 
        {
            cout << vec2[i] << " ";
        }
        cout << endl;

        --vec2;
        cout << "Vector after --vec2 : ";
        for (size_t i = 0; i < vec2.size(); ++i) 
        {
            cout << vec2[i] << " ";
        }
        cout << endl;

        vec2.clear();
        cout << "vector clear. size: " << vec2.size() << " , capacity: " << vec2.capacity() << endl;

    } 
    catch (const exception& e) 
    {
        cerr << "exception: " << e.what() << endl;
    }

    return 0;
}
