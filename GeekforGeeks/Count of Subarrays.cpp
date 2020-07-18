using namespace std;

int main()
{
    int t;
    cin>>t;
    
    while(t--)
    {
        int N,K,sol=0;
        
        cin>>N>>K;
        
        int arr[N];
        
        for(int &x: arr) cin>>x;
        
        int count = 0;
       
        for(int i=0; i<N; i++)
        {
            if(arr[i]<=K)
            {   
                sol += i-count;
                count++;
            }
        
            
            else
            {   count=0;
                sol++;
                sol += i;
            }
        }
        
        cout<<sol<<"\n";
        
    }
    
}