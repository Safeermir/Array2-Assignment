/* Progrm to ind the difference between the sum of elements at even indices to the sum of elements at odd
indices.*/
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
        int Even_sum=0;
        int Odd_sum=0;
        for(int i=0;i<v.size();i++){
            if(i%2==0)
                Even_sum+=v[i];
            else Odd_sum+=v[i];
        }
        cout<<"The Difference is: "<<Even_sum - Odd_sum<<endl;
}