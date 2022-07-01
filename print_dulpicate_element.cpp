// #include<iostream>
// #include<string.h>
// using namespace std;
// int main()
// {
//     string s;
//     cout<<"Enter the string = ";
//     cin>>s;
//     int n = s.length();
//     for(int i = 0;i<n;i++)
//     {

//     }
//     for(int i = 0;i<n;i++)
//     {
//         for(int j = i+1;j<n;j++)
//         { 
//             if(s[i]==s[j])
//             {
//                 printf("\n%c\n",s[i]);
//             }
//         }
//     }
    

// return 0;
// }
#include<iostream>
#include<cstring>
using namespace std;

int main() {

    int i, j, len, v = 1;
    char str[100];

    cout << "Enter string:";
    cin.getline(str, 100);

    len = strlen(str);

    cout << "Duplicate characters:";
    for (i = 0; i < len; i++) {
        for (j = i + 1; j < len; j++)
        {
            if (str[i] == str[j])
            {
                
                
                if (v == 1 && str[j] != '\0') 
                {
                    cout << str[i];
                }
                str[j] = '\0';
                v++;
            }
        }
        v = 1;
    }
cout<<str;
    return 0;
}