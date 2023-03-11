// time o(n) space o(1)
#include<iostream>
using namespace std;
void reverse(int arr[], int n)
{
    int i=0; //
    int j=n-1;
    while(i<j)
    {
     swap(arr[i], arr[j]);
     i++;
      j--;

    }
}
int main()
{
    int n;
    cout<<"enter size of array:"<<endl;
    cin >> n;

    int A[n];
    cout<<"enter array:"<<endl;
    for(int i=0; i<n; i++)
    {
        cin >> A[i];
    }
   // calling reverse function
    reverse(A,n);
    cout<<"reverse array:"<<endl;
    for(int i=0; i<n; i++)
    cout<<A[i]<<" ";
    return 0;
}