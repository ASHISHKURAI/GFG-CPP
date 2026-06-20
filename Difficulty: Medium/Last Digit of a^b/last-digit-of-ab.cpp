class Solution {
  public:
    virtual int getLastDigit(string& a, string& b){
      int an=(a[a.size()-1]) - '0';
      int bn=0;
      if((b.size()) > 1) bn=(((b[b.size()-2])-'0')*10) + ((b[b.size()-1])-'0');
      else bn=((b[b.size()-1])-'0');
      
      
      if(an<=1) return an;
      if(bn==0){
        int i=b.size()-1;
        for(i=b.size()-1; i>=0; i--){
          if(b[i]!='0') break;    
        }
        if(i<0) return 1;
      }
      if(an==5 || an==6) return an;
     
      
      map<int, vector<int>> mp;
      
      mp[2].push_back(1);
      mp[2].push_back(2);
      mp[2].push_back(4);
      mp[2].push_back(8);
      mp[2].push_back(6);      
      
      mp[3].push_back(1);
      mp[3].push_back(3);
      mp[3].push_back(9);
      mp[3].push_back(7);
      mp[3].push_back(1);
      
      mp[4].push_back(1);
      mp[4].push_back(4);
      mp[4].push_back(6);
      
      mp[7].push_back(1);
      mp[7].push_back(7);
      mp[7].push_back(9);
      mp[7].push_back(3);
      mp[7].push_back(1);
      
      mp[8].push_back(1);
      mp[8].push_back(8);
      mp[8].push_back(4);
      mp[8].push_back(2);
      mp[8].push_back(6);
      
      mp[9].push_back(1);
      mp[9].push_back(9);
      mp[9].push_back(1);
      
      
      if(an==4 || an==9){
        bn=((b[b.size()-1])-'0');
        if(bn&1) return mp[an][1];
        return mp[an][2];
      }
      
      bn=(bn%4==0)? 4: bn%4;

      return mp[an][bn];
      
    }
};