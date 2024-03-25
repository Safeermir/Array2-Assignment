// Program to find the Given array is sorted or not.
#include<iostream>
#include<vector>
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
        bool flag=true;;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>v[i+1]){
                flag =false;
            }
            
        }
        if(flag==false) cout<<"Array is not sorted.";
        else cout<<"Array is sorted.";
        return 0;
}