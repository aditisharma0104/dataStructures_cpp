// Linear Search Program 

#include<iostream>
using namespace std;

class lsearch
{
    public:
    int arr[100],a_size,s_element,i;
    void getdata();
    void display();

};

void lsearch::getdata()
{
    cout<<"Enter the size of the array"<<endl;
    cin>>a_size;

    cout<<"Enter the elements of the array"<<endl;
    
    for(i=0; i<a_size; i++)
    {
        cin>>arr[i];

    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>s_element;


}

void lsearch::display()
{
    int flag=0;
    for(i=0; i<a_size; i++)
    {
        if(arr[i]==s_element)
        {
            cout<<"Element found at position " <<(i+1)<<endl;
            flag++;
        }
    }
    if(flag==0)
    cout<<"Element not found"<<endl;
}

int main()
{
    lsearch obj;
    obj.getdata();
    obj.display();
    return 0;
}

