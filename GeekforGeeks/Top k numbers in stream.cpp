using namespace std;

class Player
{
    
    public:
    
    int play;
    
    int freq;
    
    Player(int p,int f): play(p), freq(f)
    
    {
        
    }
    
};


bool operator<(const Player  &p1,const Player &p2)
{
    if(p1.freq==p2.freq) return(p1.play>p2.play);
    
    else return(p1.freq<p2.freq);
    
}
    

 int main()
 {
     int t,N,k,num;
     
     cin>>t;
     
     while(t--)
     {
         cin>>N>>k;
         
         unordered_map<int,int> m;
         
         
         for(int i=0;i<N;i++)
         {
             cin>>num;
             
             m[num]++;
             
            priority_queue<Player>  pq;
            
            for(auto i:m) pq.push(Player(i.first,i.second));
             
             int check=0;
             
             while(!pq.empty()&&check<k)
             {
                 cout<<pq.top().play<<" ";
                 
                 pq.pop();
                 
                 check++;
             }
         }
         
            cout<<"\n";
     }
 }