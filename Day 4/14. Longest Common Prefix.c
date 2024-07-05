// Write a function to find the longest common prefix string amongst an array of strings.

// If there is no common prefix, return an empty string "".

char* longestCommonPrefix(char** str, int n) {
        if(n<=0){
        return "";
    }
    char *prefix=(char*)malloc(strlen(str[0])+1*sizeof(char));
    strcpy(prefix,str[0]);
    for(int i=1;i<n;i++){
        char *temp=(char*)malloc(strlen(prefix)+1*sizeof(char));
        int j=0;
        while(prefix[j]&&str[i][j]&&prefix[j]==str[i][j]){
            temp[j]=prefix[j];
            j++;
        }
        temp[j]='\0';
    
    strcpy(prefix,temp);
    free(temp);
    }
    return prefix;
}
