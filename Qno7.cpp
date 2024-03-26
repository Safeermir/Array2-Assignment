/*Program to check If an array  contains n elements, then check if the given array is a palindrome or not . */
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
        bool flag=true;
        for(int i=0;i<(v.size())/2;i++){
            if(v[i]!=v[v.size()-i-1]){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<"The Array is palindrome."<<endl;
        }
        else{
            cout<<"The Array is not palindrome.";
        }
        return 0;
}