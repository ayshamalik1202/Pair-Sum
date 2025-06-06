#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int N;
    cout<<"Number of terms: ";
    cin>>N;
    vector<int>vec;
    int assign_value;
    cout<<"Given array is: ";
    for(int i=0; i<N; i++)
    {
        cin>>assign_value;
        vec.push_back(assign_value);
    }
    int target_value;
    cout<<"The target value is: ";
    cin>>target_value;
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            cout<<"Pair is: ";
            cout<<"("<<vec[i]<<","<<vec[j]<<")"<<endl;
        }
    }
    for(int i=0; i<N; i++)
    {
        for(int j=i+1; j<N; j++)
        {
            if(vec[i]+vec[j]==target_value)
            {
                cout<<"The pair which sum is equal to "<<target_value<<" is "<<"("<<vec[i]<<","<<vec[j]<<")"<<endl;
                cout<<"The indexes of numbers of the pair are "<<i<<" and "<<j<<endl;
            }
        }
    }
    return 0;
}
