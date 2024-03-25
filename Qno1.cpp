#include<iostream>
#include<vector>
using namespace std;
     int main(){
        int n;
        cout<<"Enter the size of Array: ";
        cin>>n;
        vector <int> v;
        cout<<"Entert the "<<n<<" elements of array : ";
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int x;
        cout<<"Enter Value of X: ";
        cin>>x;
        int count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]>x) count++;
        }
        cout<<"Number of elements strictly greater than "<<x<<" are: "<<count<<endl;

    return 0;
}