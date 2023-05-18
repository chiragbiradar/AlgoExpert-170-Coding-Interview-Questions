#include<iostream>
#include<vector>
using namespace std;

vector<int> moveEnd(vector<int> array, int element){
    int i=0,j=array.size()-1;
    while(i<j)
    {
        while (i<j && array[j]==element)
        {
            j-=1;
        }
        if(array[i]==element)
        {
            array[i]=array[j];
            array[j]=element;
        }
        i++;
        
    }
    return array;
    }

int main()
{
    int element,n;
    vector<int> array;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int j;
        cin>>j;
        array.push_back(j);
    }
    cin>>element;
    array = moveEnd(array,element);
    cout<<"[";
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<"]";
}
