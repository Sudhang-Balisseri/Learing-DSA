#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector-syntax-1
    vector<int> vec; //0

    // push_back function
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    // emplace_back function
    vec.emplace_back(6);

    // pop_back function
    vec.pop_back();

    cout << "size = " << vec.size() << endl; // size function
    cout << "capacity = " << vec.capacity() << endl; // capacity function

    // for-each-loop
    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "val at idx 2: " << vec[2] << " or " << vec.at(2) << endl; // [] or at() function
    cout << "front: " << vec.front() << endl; // front function
    cout << "back: " << vec.back() << endl; // back function

    // vector-syntax-2
    vector<int> vec2 = {1,2,3,4,5};

    for (int val : vec2)
    {
        cout << val << " ";
    }

    cout << endl;
    
    // vector-syntax-3
    vector<int> vec3(3, 69);

    for (int val : vec3)
    {
        cout << val << " ";
    }

    cout << endl;

    // vector-syntax-4
    vector<int> vec4(vec2);

    for (int val : vec4)
    {
        cout << val << " ";
    }

    cout << endl;
    
    return 0;
}