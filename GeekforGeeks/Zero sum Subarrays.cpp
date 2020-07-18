using namespace std;

long long int subarray(long long int arr[],int N)
{
    unordered_map<long long int,long long int> hash;
    
    long long int sum = 0;
    
    long int count = 0;
    
    for(int i =0; i<N; i++)
    {
        sum+=arr[i];
        
        if(!sum) count++;
        
        if(hash.find(sum) != hash.end()) count += hash[sum];
        
        hash[sum]++;
    }
    
    return count;
}

int main()
{
    int t,N;
    
    cin>>t;
    
    while(t--)
    {
        cin>>N;
        
      long long  int arr[N];
        
        for(auto &x: arr) cin>>x;
        
        cout<<subarray(arr,N)<<"\n";
    }
}