/* Find the unique number in a given Array where all the elements are being repeated twice with one
value being unique.*/
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
       for(int i=0;i<v.size();i++){
        bool isUnique=true;
             for(int j=i+1;j<v.size();j++){
            if(i!=j && v[i]==v[j]){
                isUnique=false;
                break;
            }
        }
        if(isUnique){
            cout<<"The unique elemnt is : "<<v[i]<<endl;
            break;
        }
       }
       return 0;
}