//Guys this is a naive approach 
// TC will be O^2
// If there is TC bound better not to think of that approach
char highestOccurringChar(char a[]) {
   int max = 0;
    char s;
    for(int i = 0;a[i]!='\0';i++)
    {
         int count = 1;
        for(int j = i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j]&&a[j]!='A')
            {
                a[j] = 'A';
              
                count++;
            }
        }
        if(count>max)
        {
            max = count;
            s = a[i];
        }
    }
    return s;
}



char highestOccurringChar(char input[]) {
    
    int freq[256] = {0};
    char in;
    for(int i = 0;input[i]!='\0';i++)
    {
        freq[input[i]]++;
    }
    int max = -1;
    for( int i = 0;i<256;i++)
    {
        if(max<freq[input[i]]){
            max = freq[input[i]];
            in = input[i];
        }
    }
    return in;
}
