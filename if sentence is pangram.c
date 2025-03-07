bool checkIfPangram(char* sen) {
    int alpha[26]={0};
    for(int i=0;i<strlen(sen);i++){
        alpha[sen[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(alpha[i]<=0){
        return 0;
        }
    }
    printf("%d ",alpha[0]);
    return 1;
}
