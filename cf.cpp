#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;



int main() {

        #ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output3.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;
        vector<long long>v(n);
        long long s=0;
        
        for(int i=0; i<n; i++)
            cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=0; i<n-1; i++){
            if(v[i]<0 && v[i+1]>0 && -v[i]<v[i+1]){
                continue;
            }
            
            else if(v[i]<0){
                v[i]=-v[i];
                v[i+1]=-v[i+1];
            }

        }

        for(int i=0; i<n; i++)
            s+=v[i];
        cout<<s<<endl;

    }

    return 0;
}
