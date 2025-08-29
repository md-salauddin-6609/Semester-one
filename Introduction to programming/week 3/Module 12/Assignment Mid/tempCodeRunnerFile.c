    char s[10001];
    scanf("%s", &s);

    char freq[26] = {0};
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i]-97;
        freq[val]++;
    }
    for (int i = 0; i <=26; i++)
    {
        if(freq[i]>0)
        {
            printf("%c - %d\n",i+97,freq[i]);
        }
    }
    