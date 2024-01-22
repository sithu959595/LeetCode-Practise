 string s=std::to_string(cur)+std::to_string(nei[cur][j]);
        string s1=std::to_string(nei[cur][j])+std::to_string(cur);
        if(hash.find(s)!=hash.end()){
            hash[s]=true;
            hash[s1]=true;
             bool ans=true;
        ans=explore(n,edges,nei,nei[cur][j],visited,hash);
        }