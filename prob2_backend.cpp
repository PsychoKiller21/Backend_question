//Time Complexity-O(n^2),Space ComplexityO(n^2)


#include<bits/stdc++.h>
using namespace std;
bool comparator(pair<int,int>one,pair<int,int>two)
{
    if(one.first+one.second==two.first+two.second) return one.first<two.first;
    return one.first+one.second < two.first+two.second;

}

void solution(vector<int> &arrive, vector<int>&depart ,int k)
{
    vector<pair<int,int>>ans;
    int n=arrive.size();

    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        ans.push_back(make_pair(arrive[i],depart[j]));

    sort(ans.begin(),ans.end(),comparator);

    for(int i=0;i<k;i++)
        cout<<ans[i].first<<','<<ans[i].second<<endl;

}
int main()
{

    vector<int>arrive;
    //Enter array for delhi to mumbai;
    for(int i=0;i<15;i++)
        {
            int x;
            cin>>x;
            arrive.push_back(x);
        }
    vector<int>depart;
    for(int i=0;i<15;i++)
        {
            int x;
            cin>>x;
            depart.push_back(x);
        }
    cout<<"Enter value of K"<<endl;
    int k;
    cin>>k;
    solution(arrive,depart,k);
    return 0;
}
