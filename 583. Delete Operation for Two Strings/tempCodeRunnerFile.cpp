public:
    int minDistance(string word1, string word2) {
        string curstr;
        int curval=0;
        int min=10000;
        for(int i=0;i<word1.length();i++){
            curstr=curstr+word1[i];
            string a(1,word1[i]);
            if(isthere(curstr,word2)){
                curval=(word1.length()-curstr.length())+(word2.length()-curstr.length());
                if(min>curval){
                    min=curval;
                }
            }
            else if(isthere(a,word2)){
                curstr=word1[i];
                curval=(word1.length()-curstr.length())+(word2.length()-curstr.length());
                if(min>curval){
                    min=curval;
                }

            }
            else{
                curstr=word1[i];
            }
        }
        return min;

    }