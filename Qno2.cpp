// Program to find the largest three elements in the array.
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
     int main(){
        int n;
        cout<<"Enter the size of Array: ";
        cin>>n;
        vector <int> v;
        cout<<"Enter the "<<n<<" elements of array : ";
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
    int max=INT_MIN;
    int smax=INT_MIN;
    int tmax=INT_MIN;
    for(int i=0;i<v.size();i++){
        if (v[i]>max){ 
            tmax=smax;
            smax=max;
            max=v[i];
            }
        else if(v[i]!=max && v[i]>smax) {
            tmax=smax;
            smax=v[i];
        }
        else if(v[i]>tmax && v[i]!=max && v[i]!=smax) tmax=v[i];
    }
    cout<<"Max Element is : "<<max<<endl;
    cout<<"Second Max Element is: "<<smax<<endl;
    cout<<"Thrid Max Element is: "<<tmax;
     return 0;
}

