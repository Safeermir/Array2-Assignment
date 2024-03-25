/* Given an array of integers, change the value of all odd indexed elements to its second multiple
and increment all even indexed values by 10.*/
#include<iostream>
#include<vector>
using namespace std;
void display(vector <int> &a){
     for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
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
        int Even_sum=0;
        int Odd_sum=0;
        for(int i=0;i<v.size();i++){
            if(i%2==0)
                v[i]+=10;
            else v[i]*=2;
        }
        display(v);
        return 0;
}