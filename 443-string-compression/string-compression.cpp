class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size()==0)
        return 0;

        int j=0,f=1;string s="";
        int ind=0;
        for(int i=1;i<chars.size();i++){
            if(chars[i]==chars[j]){
                f++;
            }
            else if(f>1){
               // s+=chars[j] ;
                s+= to_string(f);
                chars[ind++]=chars[j];
                for(char ch:s){
                chars[ind++]=ch;
                
                }
                s="";
                f=1;
                j=i;
            }
            else {
              //  s+=chars[j];
              chars[ind++]=chars[j];
                j=i;
            }
           
            }
            if(f!=1){
            //s+=chars[j];
            s+=to_string(f);
             chars[ind++]=chars[j];
             for(char ch:s){
                chars[ind++]=ch;
             }
            }
            else{
                //s+=chars[chars.size()-1];
                chars[ind++]=chars[chars.size()-1];
            }
           return ind;
            
            

        
    }
};