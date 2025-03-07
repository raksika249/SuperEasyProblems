char* firstPalindrome(char** words, int size) {
    int palin=0;
    for(int i=0;i<size;i++){
        palin=0;
        int len=strlen(words[i]);
        int a=len-1,k=0;
        while(words[i][k]!='\0'){
            if(words[i][k]!=words[i][a]){
            palin=1;
            }
            k++;
            a--;
        }
        if(palin==0)
        return words[i];
    }
    return "";
}
