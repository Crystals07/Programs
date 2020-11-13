using namespace std;

class huff
{
    public:
    
    char data;
    
    int freq;
    
    huff* left = NULL;
    
    huff* right = NULL;
    
    huff(char data, int freq)
    {
        this->data = data;
        this->freq = freq;
    }
    
    
};

vector<int> vec;


struct jai
{
    bool operator()(const huff* h1, const huff* h2)
    {
            return h1->freq > h2->freq;
    }
};

void show(huff* h)
{
    if(!h) return;
    
    if(h->data!='/')
    {   
        //cout<<"\ndata : "<<h->data<<" : ";
        for(auto i: vec) cout<<i;     
        cout<<" ";
    }
    
    if(h->left)
    {
        vec.push_back(0);
        show(h->left);
        vec.pop_back();
    }
    
    if(h->right)
    {
        vec.push_back(1);
        show(h->right);
        vec.pop_back();
    }
}

int main() 
{
    int t,freq;

    cin>>t;
    
    string str;
    
    char data;
    
    while(t--)
    {
        cin>>str;
        
        priority_queue<huff* , vector<huff*> , jai> q;
        
        int i=0,len = str.size();
        
        while(len--)
        {
            cin>>freq;
            
            huff* h = new huff(str[i],freq);

           // cout<<"\n data :"<<str[i]<<" "<<" freq :"<<freq<<endl;
            
            q.push(h);
                            
            i++;
            
        }
        
        
        while(q.size()-1)
        {
            huff* curr = q.top();
            
            q.pop();
            
            huff* curr2 = q.top();
            
            q.pop();
            
            huff* hu = new huff('/',curr->freq+curr2->freq);

        //    cout<<" @"<<curr->freq<<" "<<"# "<<curr2->freq<<endl;
            
            hu->left = curr;
            
            hu->right = curr2;
            
            q.push(hu);
            
        }
        
        show(q.top());
        
        cout<<"\n";
        
    }
	
}	
	
