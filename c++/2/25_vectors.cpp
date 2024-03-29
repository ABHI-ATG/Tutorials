#include<iostream>
#include<vector>

using namespace std;
//in vector, the size can be resize


void display(vector<int>&v){
for(int i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
    cout<<endl;

}
int main(){
vector<int> vec1;//zero length integer vector
vector<char> vec2(4);//4 element character vector 
vector<char> vec3(vec2);
vector<int> vec4(6,13);//6 element vector of 13s
display(vec4);

int element ;
for(int i=0 ;i<4;i++){
    cout<<"enter an element to add this vector ";
    cin>>element;
    vec1.push_back(element);
}
// size
// cout<<vec1.size();

// access first element
// cout<<vec1.front();

display(vec1);


// iterator

vector<int>:: iterator iter=vec1.begin();
vec1.insert(iter,500,566);
display(vec1);
// 

return 0;
}





/*
        Member functions
        (constructor)
        Construct vector (public member function )
        (destructor)
        Vector destructor (public member function )
        operator=
        Assign content (public member function )

        Iterators:
        begin
        Return iterator to beginning (public member function )
        end
        Return iterator to end (public member function )
        rbegin
        Return reverse iterator to reverse beginning (public member function )
        rend
        Return reverse iterator to reverse end (public member function )
        cbegin 
        Return const_iterator to beginning (public member function )
        cend 
        Return const_iterator to end (public member function )
        crbegin 
        Return const_reverse_iterator to reverse beginning (public member function )
        crend 
        Return const_reverse_iterator to reverse end (public member function )

        Capacity:
        size
        Return size (public member function )
        max_size
        Return maximum size (public member function )
        resize
        Change size (public member function )
        capacity
        Return size of allocated storage capacity (public member function )
        empty
        Test whether vector is empty (public member function )
        reserve
        Request a change in capacity (public member function )
        shrink_to_fit 
        Shrink to fit (public member function )

        Element access:
        operator[]
        Access element (public member function )
        at
        Access element (public member function )
        front
        Access first element (public member function )
        back
        Access last element (public member function )
        data 
        Access data (public member function )

        Modifiers:
        assign
        Assign vector content (public member function )
        push_back
        Add element at the end (public member function )
        pop_back
        Delete last element (public member function )
        insert
        Insert elements (public member function )
        erase
        Erase elements (public member function )
        swap
        Swap content (public member function )
        clear
        Clear content (public member function )
        emplace 
        Construct and insert element (public member function )
        emplace_back 
        Construct and insert element at the end (public member function )

        Allocator:
        get_allocator
        Get allocator (public member function )

        Non-member function overloads
        relational operators
        Relational operators for vector (function template )
        swap
        Exchange contents of vectors (function template )

        Template specializations
        vector<bool>
        Vector of bool (class template specialization )
*/