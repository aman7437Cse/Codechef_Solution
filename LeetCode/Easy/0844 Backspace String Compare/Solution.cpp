        }
            else{
                st.push(a);
            }
        for(char b:t){
            if(b=='#'){
                bt.pop();
            }
            else{
                if(!bt.empty())
                bt.push(b);
            }
        }
        return st==bt;
        
    }
};
            }
                st.pop();
                if(!st.empty())
            if(a=='#'){
