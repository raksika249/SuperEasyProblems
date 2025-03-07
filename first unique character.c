int firstUniqChar(char* s) {
    int n = strlen(s);
    int a[26] ={};
    for(int i=0;i<n;i++)
    {
    a[s[i] - 'a']++;
    printf("%d ",s[i] - 'a');
    }
    printf("%s ",a);
    for(int i=0;i<n;i++)
    if(a[s[i] - 'a'] ==1)
    {
        printf("%s ",a);
        return i;
    }
    return -1;
}
