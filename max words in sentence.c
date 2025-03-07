int mostWordsFound(char** s, int size) {
    int max=0;
    for(int i=0;i<size;i++){
        int word=0;
        for(int j=0;j<strlen(s[i]);j++){
            if(s[i][j]==' ')
            word++;
        }
        if(word>max)
        max=word;
    }
    return max+1;
}
